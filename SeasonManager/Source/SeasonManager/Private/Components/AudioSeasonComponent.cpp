#include "AudioSeasonComponent.h"
#include "TimerSeasonSwitcher.h"

UAudioSeasonComponent::UAudioSeasonComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UAudioSeasonComponent::OnRegister()
{
	Super::OnRegister();
	
	if (AActor* Owner = GetOwner())
	{
		AudioComp = NewObject<UAudioComponent>(Owner, UAudioComponent::StaticClass(), TEXT("SeasonAudioComponent"));

		if (AudioComp)
		{
			if (USceneComponent* Root = Owner->GetRootComponent())
			{
				if (Root != AudioComp)
				{
					//MotherNature need a component for attach
					//AudioComp->SetupAttachment(Root);
				}
				else
				{
					UE_LOG(LogSeasonComponent, Warning, TEXT("AudioSeasonComponent is the RootComponent; skipping attachment"));
				}
			}

			AudioComp->bAutoActivate = false;
			AudioComp->bAutoDestroy = false;
			AudioComp->RegisterComponent();
		}
	}
}

void UAudioSeasonComponent::OnSeasonWarmup_Implementation(USeasonDefinition* Def, float Norm)
{
	const auto* Pack = GetPack<UAudioInfoPack>(Def);
	if (Pack)
	{
		PlayAudio(Pack);
	}
	else
	{
		UE_LOG(LogSeasonComponent, Warning, TEXT("AudioInfoPack not found"));
	}
}


void UAudioSeasonComponent::OnSeasonCooldown_Implementation(USeasonDefinition* Def, float /*Norm*/)
{
	const auto* Pack = GetPack<UAudioInfoPack>(Def);
	if (Pack)
	{
		StopAudio(Pack);
	}
}

void UAudioSeasonComponent::PlayAudio(const UAudioInfoPack* Pack) const
{
	if (!AudioComp || !Pack || !Pack->Sound)
	{
		UE_LOG(LogSeasonComponent, Warning, TEXT("Missing AudioComponent or Sound"));
		return;
	}
	AudioComp->SetSound(Pack->Sound);
	AudioComp->FadeIn(Pack->FadeInDuration);
}

void UAudioSeasonComponent::StopAudio(const UAudioInfoPack* Pack) const
{
	if (AudioComp && AudioComp->IsPlaying())
	{
		const float FadeOut = Pack ? Pack->FadeOutDuration : 1.0f;
		AudioComp->FadeOut(FadeOut, 0.f);
	}
}
void UAudioSeasonComponent::OnUnregister()
{
	if (AudioComp)
	{
		AudioComp->DestroyComponent();
		AudioComp = nullptr;
	}
	Super::OnUnregister();
}