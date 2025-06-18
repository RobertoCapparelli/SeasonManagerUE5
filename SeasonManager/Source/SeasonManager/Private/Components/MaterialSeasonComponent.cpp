#include "MaterialSeasonComponent.h"
#include "TimerManager.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

UMaterialSeasonComponent::UMaterialSeasonComponent(): bUseDeferredTagCached(false)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMaterialSeasonComponent::OnSeasonWarmup_Implementation(USeasonDefinition* Def, float Norm)
{
	if (auto* Pack = GetPack<UMaterialInfoPack>(Def))
	{
		CurrentPack = Pack;
		MPC_Instance = GetWorld()->GetParameterCollectionInstance(Pack->ParameterCollection);
		if (!MPC_Instance) return;

		if (Pack->bUseDeferredTag)
		{
			CacheDeferredComponents(Pack->DeferredActorTag);
		}

		//Start getting total duration of warmup and after start with blend
		WarmupStartTime = GetWorld()->GetTimeSeconds();
		WarmupDuration = Def->DurationInSeconds * Def->EnterPhaseRatio;

		//Get A and B for Lerp --> Lerp(Start,Target,alpha) 
		StartScalarValues.Reset();
		TargetScalarValues.Reset();
		for (auto& P : Pack->ScalarParameters)
		{
			if (P.BlendType == ESeasonBlendType::Instant) continue;
			float Curr = 0.f;
			MPC_Instance->GetScalarParameterValue(P.ParameterName, Curr);
			StartScalarValues.Add(P.ParameterName, Curr);
			TargetScalarValues.Add(P.ParameterName, P.Value);
		}
		for (auto& P : Pack->VectorParameters)
		{
			if (P.BlendType == ESeasonBlendType::Instant) continue;
			FLinearColor Curr;
			MPC_Instance->GetVectorParameterValue(P.ParameterName, Curr);
			StartVectorValues.Add(P.ParameterName, Curr);
			TargetVectorValues.Add(P.ParameterName, P.Value);
		}
		 bUseDeferredTagCached = Pack->bUseDeferredTag;
		//Start lerp with 0.1 Rate
		GetWorld()->GetTimerManager()
		          .SetTimer(WarmupTimerHandle, this, &UMaterialSeasonComponent::PerformWarmupStep, WarmupInterval,
		                    true);
	}
	
}

bool UMaterialSeasonComponent::IsAnyDeferredVisible() const
{
	for (auto& W : DeferredComponents)
		if (auto* Comp = W.Get())
			if (Comp->WasRecentlyRendered(0.2f))
				return true;

	return false;
}

void UMaterialSeasonComponent::PerformWarmupStep()
{
	if (!CurrentPack || !MPC_Instance) return;
	//Get aplha for lerp 
	const float Elapsed = GetWorld()->GetTimeSeconds() - WarmupStartTime;
	const float Alpha = WarmupDuration > KINDA_SMALL_NUMBER
		                    ? FMath::Clamp(Elapsed / WarmupDuration, 0.f, 1.f)
		                    : 1.f;
	//check if cacheditem are visible
	const bool bAnyVisible = bUseDeferredTagCached && IsAnyDeferredVisible();

	//Start with scalar

	/* Using ScalarsToRemove and VectorToRemove becouse next implementation can be
	 * set N.ofStep (For the moment step are 1 and linear are lerped)
	 */
	TArray<FName> ScalarsToRemove;
	for (auto& Param : CurrentPack->ScalarParameters)
	{
		const FName& Name = Param.ParameterName;

		//Putting that here (before Step) it meaning all EParamUpdateMode::OffScreen are ESeasonBlendType::Step
		if (Param.UpdateMode == EParamUpdateMode::OffScreen)
		{
			if (!bAnyVisible)
			{
				MPC_Instance->SetScalarParameterValue(Name, Param.Value);
				ScalarsToRemove.Add(Name);
			}
			//Try next call
			continue;
		}

		//Step == change immediatly value to target
		if (Param.BlendType == ESeasonBlendType::Instant)
		{
			MPC_Instance->SetScalarParameterValue(Name, Param.Value);
			ScalarsToRemove.Add(Name);
			continue;
		}

		// Interpolation
		float StartVal = StartScalarValues.FindChecked(Name);
		float Target = TargetScalarValues.FindChecked(Name);
		const float V = FMath::Lerp(StartVal, Target, Alpha);
		MPC_Instance->SetScalarParameterValue(Name, V);

		if (Alpha >= 1.f)
			ScalarsToRemove.Add(Name);
	}
	// Remove finished scalar 
	for (auto& N : ScalarsToRemove)
	{
		StartScalarValues.Remove(N);
		TargetScalarValues.Remove(N);
	}

	// Vector
	TArray<FName> VectorsToRemove;
	for (auto& Param : CurrentPack->VectorParameters)
	{
		const FName& Name = Param.ParameterName;

		if (Param.BlendType == ESeasonBlendType::Instant)
		{
			MPC_Instance->SetVectorParameterValue(Name, Param.Value);
			VectorsToRemove.Add(Name);
			continue;
		}

		if (Param.UpdateMode == EParamUpdateMode::OffScreen)
		{
			if (!bAnyVisible)
			{
				MPC_Instance->SetVectorParameterValue(Name, Param.Value);
				VectorsToRemove.Add(Name);
			}
			continue;
		}

		const FLinearColor& StartCol = StartVectorValues.FindChecked(Name);
		const FLinearColor& EndCol = TargetVectorValues.FindChecked(Name);
		FLinearColor CurrCol = FMath::Lerp(StartCol, EndCol, Alpha);
		MPC_Instance->SetVectorParameterValue(Name, CurrCol);

		if (Alpha >= 1.f)
			VectorsToRemove.Add(Name);
	}
	for (auto& N : VectorsToRemove)
	{
		StartVectorValues.Remove(N);
		TargetVectorValues.Remove(N);
	}

	if (Alpha >= 1.f && TargetScalarValues.Num() == 0 && TargetVectorValues.Num() == 0)
	{
		GetWorld()->GetTimerManager().ClearTimer(WarmupTimerHandle);
		CurrentPack = nullptr;
	}
}

void UMaterialSeasonComponent::OnSeasonEnd_Implementation(USeasonDefinition* Def, float Norm)
{
	// Stop the warmup timer if still running
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(WarmupTimerHandle);
	}

	// Clear cached pack and MPC instance
	CurrentPack = nullptr;
	MPC_Instance = nullptr;

	// Reset blend data
	StartScalarValues.Empty();
	TargetScalarValues.Empty();
	StartVectorValues.Empty();
	TargetVectorValues.Empty();

	// Clear deferred components list
	DeferredComponents.Empty();

	UE_LOG(LogSeasonComponent, Log, TEXT("[%s] MaterialSeasonComponent: OnSeasonEnd cleanup complete"),
	       *GetOwner()->GetName());
}


void UMaterialSeasonComponent::CacheDeferredComponents(FName Tag)
{
	DeferredComponents.Reset();
	const UWorld* World = GetWorld();
	if (!World) return;

	// StaticMeshComponents
	for (TObjectIterator<UStaticMeshComponent> It; It; ++It)
	{
		UStaticMeshComponent* Comp = *It;
		if (Comp->GetWorld() == World && Comp->ComponentHasTag(Tag))
		{
			DeferredComponents.Add(Comp);
		}
	}

	// InstancedStaticMeshComponents (foliage, PCG, ecc.)
	for (TObjectIterator<UInstancedStaticMeshComponent> It; It; ++It)
	{
		UInstancedStaticMeshComponent* Comp = *It;
		if (Comp->GetWorld() == World && Comp->ComponentHasTag(Tag))
		{
			DeferredComponents.Add(Comp);
		}
	}

	UE_LOG(LogSeasonComponent, Log, TEXT("[%s] Cached %d deferred mesh components tagged '%s'"),
	       *GetOwner()->GetName(),
	       DeferredComponents.Num(),
	       *Tag.ToString());
}
