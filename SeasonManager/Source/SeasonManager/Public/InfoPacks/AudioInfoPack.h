#pragma once

#include "CoreMinimal.h"
#include "SeasonInfoPackBase.h"
#include "Sound/SoundBase.h"
#include "AudioInfoPack.generated.h"

UCLASS(BlueprintType)
class SEASONMANAGER_API UAudioInfoPack : public USeasonInfoPackBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	float FadeInDuration = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	float FadeOutDuration = 1.5f;
};
