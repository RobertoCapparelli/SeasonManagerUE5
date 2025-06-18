#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerSeasonSwitcher.h"
#include "SeasonDefinition.h"
#include "SeasonInfoPackBase.h"
#include "SeasonComponentBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSeasonComponent, Log, All);

UCLASS(ClassGroup=(Season), Blueprintable, meta=(BlueprintSpawnableComponent))
class SEASONMANAGER_API USeasonComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type Reason) override;

	//Function called from TimerSeasoonSwitcher, principal functions
	UFUNCTION(BlueprintNativeEvent, Category="Season")
	void OnSeasonWarmup(USeasonDefinition* Def, float Norm);
	virtual void OnSeasonWarmup_Implementation(USeasonDefinition* Def, float Norm) {}

	UFUNCTION(BlueprintNativeEvent, Category="Season")
	void OnSeasonBegin(USeasonDefinition* Def, float Norm);
	virtual void OnSeasonBegin_Implementation(USeasonDefinition* Def, float Norm) {}

	UFUNCTION(BlueprintNativeEvent, Category="Season")
	void OnSeasonCooldown(USeasonDefinition* Def, float Norm);
	virtual void OnSeasonCooldown_Implementation(USeasonDefinition* Def, float Norm) {}

	UFUNCTION(BlueprintNativeEvent, Category="Season")
	void OnSeasonEnd(USeasonDefinition* Def, float Norm);
	virtual void OnSeasonEnd_Implementation(USeasonDefinition* Def, float Norm) {}


#pragma region GETPACKFUNCTION
	//Get pack in c++
	template <typename TPack>
	TPack* GetPack(USeasonDefinition* Def)
	{
		if (auto* Pack = Def->InfoPacksByClass.FindRef(TPack::StaticClass()))
			return Cast<TPack>(Pack);
		return nullptr;
	}
	//Get pack in blueprint
	UFUNCTION(BlueprintCallable, Category="Season")
	USeasonInfoPackBase* GetInfoPack(
		USeasonDefinition* Definition,
		TSubclassOf<USeasonInfoPackBase> PackClass) const
	{
		if (!Definition || !PackClass) 
			return nullptr;
		return Cast<USeasonInfoPackBase>(
			Definition->InfoPacksByClass.FindRef(PackClass));
	}
#pragma endregion
};
