#pragma once

#include "CoreMinimal.h"
#include "SeasonComponentBase.h"
#include "ParticleSeasonComponent.generated.h"

class USeasonDefinition;
class UParticleInfoPack;
class UNiagaraComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SEASONMANAGER_API USeasonalParticleComponent : public USeasonComponentBase
{
	GENERATED_BODY()

public:
	USeasonalParticleComponent();

protected:
	virtual void OnSeasonBegin_Implementation(USeasonDefinition* Def, float Norm) override;
	virtual void OnSeasonCooldown_Implementation(USeasonDefinition* Def, float Norm) override;

	UFUNCTION()
	void OnNiagaraFinished(UNiagaraComponent* FinishedComponent);

private:
	TArray<UNiagaraComponent*> ActiveParticleComps;
	bool bIsCleaningUp;
};