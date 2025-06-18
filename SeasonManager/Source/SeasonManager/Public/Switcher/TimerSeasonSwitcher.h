#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ISeasonSwitcher.h"
#include "SeasonDefinition.h"
#include "TimerSeasonSwitcher.generated.h"

class USeasonComponentBase;
//SEASON PHASE 
UENUM(BlueprintType)
enum class ESeasonPhase : uint8
{
  Warmup     UMETA(DisplayName="Warmup"),
  Begin      UMETA(DisplayName="Begin"),
  Cooldown   UMETA(DisplayName="Cooldown"),
  End        UMETA(DisplayName="End")
};
UCLASS(ClassGroup=(Season), meta=(BlueprintSpawnableComponent))
class SEASONMANAGER_API UTimerSeasonSwitcher
  : public UActorComponent
  , public ISeasonSwitcher
{
  GENERATED_BODY()

public:
  UTimerSeasonSwitcher();
  
  virtual void Start() override;
  virtual void Stop() override;
  virtual void NextSeason() override;
  
  //From ISeasonSwitcher, principal function for cicle
  virtual FOnSeasonWarmup&   OnSeasonWarmup()   override { return SeasonWarmup; }
  virtual FOnSeasonBegin&    OnSeasonBegin()    override { return SeasonBegin; }
  virtual FOnSeasonCooldown& OnSeasonCooldown() override { return SeasonCooldown; }
  virtual FOnSeasonEnd&      OnSeasonEnd()      override { return SeasonEnd; }
  virtual FOnSeasonChanged&  OnSeasonChanged()  override { return SeasonChanged; }

  
  UPROPERTY(EditAnywhere, Category="Season Switcher")
  TArray<USeasonDefinition*> SeasonSequence;



protected:
  virtual void BeginPlay() override;

private:
  int32 CurrentIndex = INDEX_NONE;
  ESeasonPhase CurrentPhase = ESeasonPhase::Warmup;
  
  float SeasonStartTime  = 0.f;
  float CurrentDuration  = 1.f;

  // concrete delegates
  FOnSeasonWarmup    SeasonWarmup;
  FOnSeasonBegin     SeasonBegin;
  FOnSeasonCooldown  SeasonCooldown;
  FOnSeasonEnd       SeasonEnd;
  FOnSeasonChanged   SeasonChanged;

  // timer handles
  FTimerHandle HandleBegin;
  FTimerHandle HandleCooldown;
  FTimerHandle HandleEnd;

  void ScheduleCurrentSeason();
  void DoBegin();
  void DoCooldown();
  void DoEnd();
  
  TArray<USeasonComponentBase*> RegisteredComponents;


public:
#pragma region Getters
  UFUNCTION(BlueprintPure, Category="Season Switcher")
  USeasonDefinition* GetCurrentDefinition() const
  {
    return (SeasonSequence.IsValidIndex(CurrentIndex)
              ? SeasonSequence[CurrentIndex]
              : nullptr);
  }

  UFUNCTION(BlueprintPure, Category="Season Switcher")
  float GetNormalizedProgress() const
  {
    if (!GetWorld() || CurrentDuration <= 0.f) return 0.f;
    float Elapsed = GetWorld()->GetTimeSeconds() - SeasonStartTime;
    return FMath::Clamp(Elapsed / CurrentDuration, 0.f, 1.f);
  }
  
  UFUNCTION(BlueprintPure, Category="Season Switcher")
  ESeasonPhase GetCurrentPhase() const { return CurrentPhase; }

  UFUNCTION(BlueprintPure, Category="Season Switcher")
  float GetTimeToNextPhase() const
  {
    float Elapsed = GetWorld()->GetTimeSeconds() - SeasonStartTime;
    return FMath::Max(0.f, CurrentDuration - Elapsed);
  }
  
#pragma endregion
  
};

