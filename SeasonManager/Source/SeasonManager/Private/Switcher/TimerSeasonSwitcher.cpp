#include "TimerSeasonSwitcher.h"

#include "MotherNature.h"
#include "SeasonComponentBase.h"
#include "Engine/World.h"
#include "TimerManager.h"

UTimerSeasonSwitcher::UTimerSeasonSwitcher()
{
  PrimaryComponentTick.bCanEverTick = false;
}

void UTimerSeasonSwitcher::BeginPlay()
{
  Super::BeginPlay();
}

void UTimerSeasonSwitcher::Start()
{
  if (!GetOwner()) return;
  
  RegisteredComponents.Empty();

  //RegisterAllComponent
  if (AActor* Owner = GetOwner())
  {
    Owner->GetComponents<USeasonComponentBase>(RegisteredComponents);
  }

  CurrentIndex = 0;
  SeasonChanged.Broadcast( GetCurrentDefinition() );

  //START
  ScheduleCurrentSeason();
}

void UTimerSeasonSwitcher::Stop()
{
  if (const UWorld* World = GetWorld())
  {
    auto& TimerManager = World->GetTimerManager();
    TimerManager.ClearTimer(HandleBegin);
    TimerManager.ClearTimer(HandleCooldown);
    TimerManager.ClearTimer(HandleEnd);
  }
}

void UTimerSeasonSwitcher::NextSeason()
{
  Stop();
  if (SeasonSequence.Num() == 0)
  {
    return;
  }
  CurrentIndex = (CurrentIndex + 1) % SeasonSequence.Num();
  ScheduleCurrentSeason();
}

void UTimerSeasonSwitcher::ScheduleCurrentSeason()
{
  if (!GetWorld() || !SeasonSequence.IsValidIndex(CurrentIndex))
    return;

  USeasonDefinition* Def = SeasonSequence[CurrentIndex];
  // prendi i parametri dal definition
  const float Duration     = FMath::Max(Def->DurationInSeconds, KINDA_SMALL_NUMBER);
  const float WarmRatio = FMath::Clamp(Def->EnterPhaseRatio,  0.f, 1.f);
  const float CoolDownRatio = FMath::Clamp(Def->ExitPhaseRatio,   0.f, 1.f);

  // record timing per GetNormalizedProgress
  SeasonStartTime  = GetWorld()->GetTimeSeconds();
  CurrentDuration  = Duration;

  // 1) Warmup immediato
  CurrentPhase = ESeasonPhase::Warmup;
  for (auto* Comp : RegisteredComponents)
  {
    Comp->OnSeasonWarmup(Def, 0.f);
  }
  //For Blueprint use brodcast
  SeasonWarmup.Broadcast(Def, 0.f);
  UE_LOG(LogSeasonManager, Log, TEXT("Switcher[%d]: Warmup"), CurrentIndex);
  
  auto& TM = GetWorld()->GetTimerManager();
  //Begin
  TM.SetTimer(HandleBegin,    this, &ThisClass::DoBegin,    Duration * WarmRatio, false);
  //Cooldown
  TM.SetTimer(HandleCooldown, this, &ThisClass::DoCooldown, Duration * CoolDownRatio, false);
  //End
  TM.SetTimer(HandleEnd,      this, &ThisClass::DoEnd,      Duration,         false);
}

void UTimerSeasonSwitcher::DoBegin()
{
  CurrentPhase = ESeasonPhase::Begin;
  
  USeasonDefinition* Def = GetCurrentDefinition();
  float Norm = GetNormalizedProgress();
  //Data-driven for C++
  for (auto* Comp : RegisteredComponents)
  {
    Comp->OnSeasonBegin(Def, Norm);
  }
  //For Delegate (UI, OtherOBJ not in the loop, etc)
  SeasonBegin.Broadcast(Def, Norm);
  UE_LOG(LogSeasonManager, Log, TEXT("Switcher[%d]: Begin"), CurrentIndex);
}

void UTimerSeasonSwitcher::DoCooldown()
{
  CurrentPhase = ESeasonPhase::Cooldown;
  
  USeasonDefinition* Def = GetCurrentDefinition();
  float Norm  = GetNormalizedProgress();

  for (auto* Comp : RegisteredComponents)
  {
    Comp->OnSeasonCooldown(Def, Norm);
  }
  SeasonCooldown.Broadcast(Def, Norm);
  UE_LOG(LogSeasonManager, Log, TEXT("Switcher[%d]: Cooldown"), CurrentIndex);
}

void UTimerSeasonSwitcher::DoEnd()
{
  CurrentPhase = ESeasonPhase::End;
  
  USeasonDefinition* Def = GetCurrentDefinition();

  for (auto* Comp : RegisteredComponents)
  {
    Comp->OnSeasonEnd(Def, 1.f);
  }
  SeasonEnd.Broadcast(Def, 1.f);
  SeasonChanged.Broadcast(Def);
  UE_LOG(LogSeasonManager, Log, TEXT("Switcher[%d]: End → SeasonChanged"), CurrentIndex);

  NextSeason();
}
