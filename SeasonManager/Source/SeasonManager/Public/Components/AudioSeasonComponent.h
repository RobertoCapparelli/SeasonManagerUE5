#pragma once

#include "CoreMinimal.h"
#include "SeasonComponentBase.h"
#include "AudioInfoPack.h"
#include "Components/AudioComponent.h"
#include "AudioSeasonComponent.generated.h"

UCLASS(ClassGroup=(Season), meta=(BlueprintSpawnableComponent))
class SEASONMANAGER_API UAudioSeasonComponent : public USeasonComponentBase
{
    GENERATED_BODY()

public:
    UAudioSeasonComponent();
    virtual void OnRegister() override;
    virtual void OnSeasonWarmup_Implementation(USeasonDefinition* Def, float Norm) override;
    virtual void OnSeasonCooldown_Implementation(USeasonDefinition* Def, float Norm) override;

private:
    UPROPERTY()
    UAudioComponent* AudioComp = nullptr;

    void PlayAudio(const UAudioInfoPack* Pack) const;
    void StopAudio(const UAudioInfoPack* Pack) const;
    void OnUnregister();
};



