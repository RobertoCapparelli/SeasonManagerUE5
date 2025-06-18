#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SeasonDefinition.h"
#include "TimerSeasonSwitcher.h"
#include "MotherNature.generated.h"

class UMaterialSeasonComponent;
class UAudioSeasonComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogSeasonManager, Log, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnSeasonChangedSignature,
	USeasonDefinition*,
	NewSeason
);

UCLASS()
class SEASONMANAGER_API AMotherNature : public AActor
{
	GENERATED_BODY()

public:
	AMotherNature();

	UFUNCTION(BlueprintCallable, Category="Season Manager")
	void StartSeasons();

	UFUNCTION(BlueprintCallable, Category="Season Manager")
	void NextSeason();

	//Delegate for BP
	UPROPERTY(BlueprintAssignable, Category="Season Manager")
	FOnSeasonChangedSignature OnSeasonChanged;
	
	UPROPERTY(EditAnywhere, Category="Season Manager")
	bool bAutoStart = true;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess="true"))
	UTimerSeasonSwitcher* Switcher;
	
	void HandleSwitcherSeasonChanged(USeasonDefinition* NewDef);
	void BindSeasonDelegates();

	//Slate
	USeasonDefinition* CurrentDefinition = nullptr;
	float CurrentNormalizedTime = 0.f;

	
	
#pragma region GETTER
public:
	UFUNCTION(BlueprintPure, Category="Season Manager")
	USeasonDefinition* GetCurrentDefinition() const
	{
		return CurrentDefinition;
	}

	UFUNCTION(BlueprintPure, Category="Season Manager")
	float GetNormalizedTime() const
	{
		return CurrentNormalizedTime;
	}

	UFUNCTION(BlueprintPure, Category="Season Manager")
	float GetCurrentDuration() const
	{
		return CurrentDefinition ? CurrentDefinition->DurationInSeconds : 0.f;
	}

	UFUNCTION(BlueprintPure, Category="Season Manager")
	FString GetCurrentPhaseString() const
	{
		return Switcher ? UEnum::GetValueAsString(Switcher->GetCurrentPhase()) : TEXT("None");
	}

	UFUNCTION(BlueprintPure, Category="Season Manager")
	float GetTimeToNextPhase() const
	{
		return Switcher ? Switcher->GetTimeToNextPhase() : 0.f;
	}
	
	UFUNCTION(BlueprintPure, Category="Season Manager")
	ESeasonPhase GetCurrentPhase() const
	{
		return Switcher ? Switcher->GetCurrentPhase() : ESeasonPhase::Warmup;
	}
#pragma endregion
};
