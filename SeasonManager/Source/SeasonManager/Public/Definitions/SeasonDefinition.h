#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SeasonInfoPackBase.h"
#include "SeasonDefinition.generated.h"


UCLASS(BlueprintType)
class SEASONMANAGER_API USeasonDefinition : public UDataAsset
{
	GENERATED_BODY()

public:
	//Name Season
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Season")
	FName SeasonName = NAME_None;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Season", meta=(ClampMin="0.01"))
	float DurationInSeconds = 10.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Phase Timing", meta=(ClampMin="0.0", ClampMax="1.0"))
	float EnterPhaseRatio = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Phase Timing", meta=(ClampMin="0.0", ClampMax="1.0"))
	float ExitPhaseRatio = 1.0f;
	
	UPROPERTY(EditAnywhere, Category="Season")
	TMap<TSubclassOf<USeasonInfoPackBase>, USeasonInfoPackBase*> InfoPacksByClass;
};