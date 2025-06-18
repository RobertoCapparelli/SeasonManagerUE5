#pragma once

#include "CoreMinimal.h"
#include "MotherNature.h"

#if WITH_EDITOR
#include "Widgets/SCompoundWidget.h"

class SSeasonDebugWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSeasonDebugWidget)
		: _TargetActor(nullptr)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<AMotherNature>, TargetActor)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

private:
	TWeakObjectPtr<AMotherNature> Target;

	FText GetSeasonName() const;
	FText GetDuration() const;
	FText GetActiveComponents() const;
	FText GetPhase() const;
	FText GetTimeToNextSeason() const;
	FText GetProgressPercent() const;
	FText GetNextSeasonName() const;
};
#endif