#include "MotherNature.h"

#include "TimerSeasonSwitcher.h"

DEFINE_LOG_CATEGORY(LogSeasonManager);

AMotherNature::AMotherNature()
{
	PrimaryActorTick.bCanEverTick = false;
	Switcher = CreateDefaultSubobject<UTimerSeasonSwitcher>(TEXT("SeasonSwitcher"));

}

void AMotherNature::BeginPlay()
{
	Super::BeginPlay();

	if (!Switcher)
	{
		UE_LOG(LogSeasonManager, Error, TEXT("Switcher Not Found"));
		return;
	}

	//Bind all delegate on TimerSeasonSwitcher
	BindSeasonDelegates();

	if (Switcher && bAutoStart)
	{
		Switcher->Start();
	}
}


void AMotherNature::StartSeasons()
{
	if (Switcher)
	{
		Switcher->Start();
	}
}

void AMotherNature::NextSeason()
{
	if (Switcher)
	{
		Switcher->NextSeason();
	}
}

void AMotherNature::HandleSwitcherSeasonChanged(USeasonDefinition* NewDef)
{
	if (!NewDef)
	{
		UE_LOG(LogSeasonManager, Error, TEXT("Season Changed called with nullptr(In MotherNature)!"));
		return;
	}
	OnSeasonChanged.Broadcast(NewDef);
	
}


void AMotherNature::BindSeasonDelegates()
{
	auto UpdateState = [this](USeasonDefinition* Def, float Time)
	{
		CurrentDefinition     = Def;
		CurrentNormalizedTime = Time;
	};

	Switcher->OnSeasonChanged().AddUObject(this, &AMotherNature::HandleSwitcherSeasonChanged);
	Switcher->OnSeasonWarmup().AddLambda(UpdateState);
	Switcher->OnSeasonBegin().AddLambda(UpdateState);
	Switcher->OnSeasonCooldown().AddLambda(UpdateState);
	Switcher->OnSeasonEnd().AddLambda([this, UpdateState](USeasonDefinition* Def, float Time)
	{
		UpdateState(Def, Time);
		OnSeasonChanged.Broadcast(Def);
	});
}
