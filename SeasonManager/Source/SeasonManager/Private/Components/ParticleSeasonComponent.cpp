#include "ParticleSeasonComponent.h"

#include "NiagaraFunctionLibrary.h"
#include "ParticleInfoPack.h"
#include "NiagaraComponent.h"
#include "Kismet/GameplayStatics.h"


USeasonalParticleComponent::USeasonalParticleComponent(): bIsCleaningUp(false)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void USeasonalParticleComponent::OnSeasonBegin_Implementation(USeasonDefinition* Def, float Norm)
{
	if (!Def) return;

	if (auto* Pack = GetPack<UParticleInfoPack>(Def))
	{
		//Find list for current seasonDefinition
		const FSeasonSpawnGroup* Group = nullptr;
		for (auto& Pair : Pack->SpawnsBySeason)
		{
			if (Pair.Value.SeasonDefinition == Def)
			{
				Group = &Pair.Value;
				break;
			}
		}

		if (!Group)
		{
			UE_LOG(LogSeasonComponent, Warning,
			       TEXT("[%s] No spawn group for season %s"),
			       *GetOwner()->GetName(), *Def->SeasonName.ToString());
			return;
		}

		UWorld* World = GetWorld();
		if (!World) return;

		int32 SpawnedCount = 0;
		for (const auto& Entry : Group->Spawns)
		{
			if (!Entry.NiagaraSystem)
				continue;

			if (Entry.bFollowPlayer)
			{
				APawn* Pawn = UGameplayStatics::GetPlayerPawn(World, 0);
				if (!Pawn) continue;

				UNiagaraComponent* Comp = UNiagaraFunctionLibrary::SpawnSystemAttached(
					Entry.NiagaraSystem,
					Pawn->GetRootComponent(),
					NAME_None,
					Entry.PlayerOffset,
					FRotator::ZeroRotator,
					EAttachLocation::KeepRelativeOffset,
					true,
					true,
					ENCPoolMethod::None,
					true
				);
				if (Comp)
				{
					SpawnedCount++;
					ActiveParticleComps.Add(Comp);
					Comp->OnSystemFinished.AddDynamic(this, &USeasonalParticleComponent::OnNiagaraFinished);
				}
			}
			else
			{
				for (const FTransform& T : Entry.SpawnTransforms)
				{
					UNiagaraComponent* NiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
						World,
						Entry.NiagaraSystem,
						T.GetLocation(),
						T.Rotator(),
						T.GetScale3D(),
						true,
						true
					);
					if (NiagaraComponent)
					{
						SpawnedCount++;
						NiagaraComponent->SetAutoDestroy(true);
						NiagaraComponent->OnSystemFinished.AddDynamic(
							this, &USeasonalParticleComponent::OnNiagaraFinished);
						ActiveParticleComps.Add(NiagaraComponent);
					}
				}
			}
		}
	}
}


void USeasonalParticleComponent::OnSeasonCooldown_Implementation(USeasonDefinition* Def, float)
{
	for (int32 i = ActiveParticleComps.Num() - 1; i >= 0; --i)
	{
		auto* Comp = ActiveParticleComps[i];
		Comp->OnSystemFinished.RemoveDynamic(this, &USeasonalParticleComponent::OnNiagaraFinished);
		Comp->Deactivate();
	}
	ActiveParticleComps.Empty();
}

void USeasonalParticleComponent::OnNiagaraFinished(UNiagaraComponent* FinishedComponent)
{
	ActiveParticleComps.RemoveSingleSwap(FinishedComponent);
}
