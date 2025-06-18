#include "SeasonComponentBase.h"
#include "TimerSeasonSwitcher.h"

DEFINE_LOG_CATEGORY(LogSeasonComponent);

void USeasonComponentBase::BeginPlay()
{
	Super::BeginPlay();
}

void USeasonComponentBase::EndPlay(const EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
}