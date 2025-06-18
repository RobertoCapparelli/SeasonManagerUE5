#include "SeasonDebugWidget.h"
#include "MaterialSeasonComponent.h"
#include "Widgets/Text/STextBlock.h"
#include "TimerSeasonSwitcher.h"

#if WITH_EDITOR

void SSeasonDebugWidget::Construct(const FArguments& InArgs)
{
    Target = InArgs._TargetActor;
    FSlateFontInfo BaseFont = FAppStyle::GetFontStyle("DetailsView.CategoryFontStyle");
    BaseFont.Size = 10;

    ChildSlot
    [
        SNew(SVerticalBox)

        // → Season
        + SVerticalBox::Slot().AutoHeight().Padding(2)
        [
            SNew(SHorizontalBox)

            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(FText::FromString("Season: "))
                .Font(BaseFont)
            ]
            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(this, &SSeasonDebugWidget::GetSeasonName)
                
            ]
        ]

        // → Phase
        + SVerticalBox::Slot().AutoHeight().Padding(2)
        [
            SNew(SHorizontalBox)

            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(FText::FromString("Phase: "))
                .Font(BaseFont)
            ]
            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(this, &SSeasonDebugWidget::GetPhase)
                
            ]
        ]

        // → Total time
        + SVerticalBox::Slot().AutoHeight().Padding(2)
        [
            SNew(SHorizontalBox)

            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(FText::FromString("Total time: "))
                .Font(BaseFont)
            ]
            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(this, &SSeasonDebugWidget::GetDuration)
                
            ]
        ]

        // → Time to next
        + SVerticalBox::Slot().AutoHeight().Padding(2)
        [
            SNew(SHorizontalBox)

            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(FText::FromString("Time to next: "))
                .Font(BaseFont)
            ]
            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
            [
                SNew(STextBlock)
                .Text(this, &SSeasonDebugWidget::GetTimeToNextSeason)
                
            ]
        ]
    	// Progress
+ SVerticalBox::Slot().AutoHeight().Padding(2)
[
	SNew(SHorizontalBox)

	+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
	[
		SNew(STextBlock)
		.Text(FText::FromString("Progress: "))
		.Font(BaseFont)
	]
	+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
	[
		SNew(STextBlock)
		.Text(this, &SSeasonDebugWidget::GetProgressPercent)
	]
]
    	//Next season
+ SVerticalBox::Slot().AutoHeight().Padding(2)
[
	SNew(SHorizontalBox)

	+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
	[
		SNew(STextBlock)
		.Text(FText::FromString("Next: "))
		.Font(BaseFont)
	]
	+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)
	[
		SNew(STextBlock)
		.Text(this, &SSeasonDebugWidget::GetNextSeasonName)
	]
]

    ];
}


FText SSeasonDebugWidget::GetSeasonName() const
{
	if (const AMotherNature* MotherNature = Target.Get())
	{
		if (const USeasonDefinition* Def = MotherNature->GetCurrentDefinition())
		{
			return FText::FromName(Def->SeasonName);
		}
	}
	return FText::FromString(TEXT("<none>"));
}

FText SSeasonDebugWidget::GetDuration() const
{
	if (const AMotherNature* MotherNature = Target.Get())
	{
		if (const USeasonDefinition* Def = MotherNature->GetCurrentDefinition())
		{
			return FText::AsNumber(Def->DurationInSeconds);
		}
	}
	return FText::FromString(TEXT("0"));
}


FText SSeasonDebugWidget::GetPhase() const
{
	if (const AMotherNature* MotherNature = Target.Get())
	{
		ESeasonPhase Phase = MotherNature->GetCurrentPhase();
		const UEnum* EnumPtr = StaticEnum<ESeasonPhase>();
		if (EnumPtr)
		{
			return EnumPtr->GetDisplayNameTextByValue(static_cast<int64>(Phase));
		}
	}
	return FText::FromString(TEXT("None"));
}

FText SSeasonDebugWidget::GetTimeToNextSeason() const
{
	if (const AMotherNature* MotherNature = Target.Get())
		return FText::AsNumber(MotherNature->GetTimeToNextPhase());
	return FText::FromString(TEXT("0"));
}

FText SSeasonDebugWidget::GetProgressPercent() const
{
	if (const AMotherNature* MotherNature = Target.Get())
	{
		const float Normalized = MotherNature->GetNormalizedTime();
		const int32 Percent = FMath::RoundToInt(Normalized * 100.f);
		return FText::Format(NSLOCTEXT("Season", "Progress", "{0}%"), FText::AsNumber(Percent));
	}
	return FText::FromString(TEXT("0%"));
}
FText SSeasonDebugWidget::GetNextSeasonName() const
{
	if (const AMotherNature* MotherNature = Target.Get())
	{
		if (const UTimerSeasonSwitcher* Switcher = MotherNature->FindComponentByClass<UTimerSeasonSwitcher>())
		{
			const TArray<USeasonDefinition*>& Sequence = Switcher->SeasonSequence;

			int32 CurrentIndex = Sequence.IndexOfByKey(MotherNature->GetCurrentDefinition());
			if (CurrentIndex != INDEX_NONE && Sequence.Num() > 0)
			{
				int32 NextIndex = (CurrentIndex + 1) % Sequence.Num();
				if (Sequence.IsValidIndex(NextIndex) && Sequence[NextIndex])
				{
					return FText::FromName(Sequence[NextIndex]->SeasonName);
				}
			}
		}
	}
	return FText::FromString(TEXT("<none>"));
}
#endif
