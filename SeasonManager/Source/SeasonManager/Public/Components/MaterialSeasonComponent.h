#pragma once

#include "CoreMinimal.h"
#include "SeasonComponentBase.h"
#include "MaterialInfoPack.h"
#include "MaterialSeasonComponent.generated.h"

UCLASS(ClassGroup=(Season), meta=(BlueprintSpawnableComponent))
class SEASONMANAGER_API UMaterialSeasonComponent : public USeasonComponentBase
{
	GENERATED_BODY()

public:
	UMaterialSeasonComponent();

	virtual void OnSeasonWarmup_Implementation(USeasonDefinition* Def, float Norm) override;
	virtual void OnSeasonEnd_Implementation   (USeasonDefinition* Def, float Norm) override;
	
protected:

	
private:
	
#pragma region BLEND INFO
	//blend timer
	FTimerHandle WarmupTimerHandle;
	float WarmupStartTime = 0.f;
	float WarmupDuration  = 0.f;
	float WarmupInterval  = 0.1f;

	//Data blend
	UMaterialInfoPack* CurrentPack = nullptr;
	UMaterialParameterCollectionInstance* MPC_Instance = nullptr;
	TMap<FName, float> StartScalarValues;
	TMap<FName, float> TargetScalarValues;
	TMap<FName, FLinearColor> StartVectorValues;
	TMap<FName, FLinearColor> TargetVectorValues;
#pragma endregion

	
	//CachedMash for EParamUpdateMode::OffScreen
	TArray<TWeakObjectPtr<UPrimitiveComponent>> DeferredComponents;
	bool bUseDeferredTagCached;
	void CacheDeferredComponents(FName Tag);
	bool IsAnyDeferredVisible() const;
	
	//Loop warmup for blend
	void PerformWarmupStep();

};
