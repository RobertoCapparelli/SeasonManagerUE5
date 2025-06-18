#pragma once

#include "CoreMinimal.h"
class USeasonDefinition;

class ISeasonSwitcher
{
public:
	virtual ~ISeasonSwitcher() = default;
	
	virtual void Start()      = 0;
	virtual void Stop()       = 0;
	virtual void NextSeason() = 0;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSeasonWarmup,    USeasonDefinition* /*Def*/, float /*NormalizedTime*/);
	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSeasonBegin,     USeasonDefinition* /*Def*/, float /*NormalizedTime*/);
	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSeasonCooldown,  USeasonDefinition* /*Def*/, float /*NormalizedTime*/);
	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnSeasonEnd,       USeasonDefinition* /*Def*/, float /*NormalizedTime*/);
	DECLARE_MULTICAST_DELEGATE_OneParam (FOnSeasonChanged,   USeasonDefinition* /*Def*/);

	virtual FOnSeasonWarmup&   OnSeasonWarmup()   = 0;
	virtual FOnSeasonBegin&    OnSeasonBegin()    = 0;
	virtual FOnSeasonCooldown& OnSeasonCooldown() = 0;
	virtual FOnSeasonEnd&      OnSeasonEnd()      = 0;
	virtual FOnSeasonChanged&  OnSeasonChanged()  = 0;
};
