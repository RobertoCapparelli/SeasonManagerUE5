#pragma once

#include "CoreMinimal.h"
#include "SeasonBlendTypes.generated.h"

UENUM(BlueprintType)
enum class ESeasonBlendType : uint8
{
	Linear UMETA(DisplayName="Linear"),
	Instant UMETA(DisplayName="Instant")
};