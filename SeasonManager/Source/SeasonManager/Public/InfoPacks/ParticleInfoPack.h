#pragma once

#include "CoreMinimal.h"
#include "SeasonInfoPackBase.h"
#include "UObject/NoExportTypes.h"
#include "ParticleInfoPack.generated.h"

class UNiagaraSystem;

/* Different approach
 * All packInfo in a single Asset and in Component take the current Season using argument
 */

USTRUCT(BlueprintType)
struct SEASONMANAGER_API FParticleSpawnInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning")
	UNiagaraSystem* NiagaraSystem = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning")
	bool bFollowPlayer = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning", meta=(EditCondition="bFollowPlayer"))
	FVector PlayerOffset = FVector(0,0,200);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning", meta=(EditCondition="!bFollowPlayer"))
	TArray<FTransform> SpawnTransforms;
};

USTRUCT(BlueprintType)
struct SEASONMANAGER_API FSeasonSpawnGroup
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning")
	USeasonDefinition* SeasonDefinition = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning")
	TArray<FParticleSpawnInfo> Spawns;
};

UCLASS(Blueprintable)
class SEASONMANAGER_API UParticleInfoPack : public USeasonInfoPackBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawning")
	TMap<FName, FSeasonSpawnGroup> SpawnsBySeason;
};