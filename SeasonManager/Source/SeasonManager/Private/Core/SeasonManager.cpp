// SeasonManager.cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#include "SeasonManager.h"
#include "MotherNature.h"

#if WITH_EDITOR
#include "ToolMenus.h"
#include "Framework/Docking/TabManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "Editor.h"
#include "EngineUtils.h"
#include "SeasonDebugWidget.h"
#define LOCTEXT_NAMESPACE "FSeasonManagerModule"

static AMotherNature* FindMotherNature()
{
    for (const FWorldContext& Ctx : GEditor->GetWorldContexts())
    {
        if (Ctx.WorldType == EWorldType::PIE)
        {
            UWorld* World = Ctx.World();
            if (!World) continue;

            for (TActorIterator<AMotherNature> It(World); It; ++It)
            {
                return *It;
            }
        }
    }
    return nullptr;
}
TSharedRef<SDockTab> FSeasonManagerModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
    AMotherNature* MotherNature = FindMotherNature();


    return SNew(SDockTab)
        .TabRole(ETabRole::NomadTab)
        [
            SNew(SSeasonDebugWidget)
            .TargetActor( MotherNature )
        ];


}


void FSeasonManagerModule::RegisterMenus()
{

    FToolMenuOwnerScoped OwnerScoped(this);

    UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Tools");
    FToolMenuSection& Section = Menu->AddSection(
        "SeasonManagerSection",
        LOCTEXT("SeasonManagerMenuSection", "Season Manager")
    );

    Section.AddMenuEntry(
        "OpenSeasonManager",
        LOCTEXT("OpenSeasonManager", "Open Season Manager"),
        LOCTEXT("OpenSeasonManagerTooltip", "Opens the Season Manager tab"),
        FSlateIcon(), 
        FUIAction( FExecuteAction::CreateRaw(this, &FSeasonManagerModule::PluginButtonClicked) )
    );

}

#endif




static const FName SeasonManagerTabName("SeasonManager");

#if WITH_EDITOR
void FSeasonManagerModule::PluginButtonClicked()
{

    FGlobalTabmanager::Get()->TryInvokeTab( SeasonManagerTabName );

}
#endif
void FSeasonManagerModule::StartupModule()
{
#if WITH_EDITOR

    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
        SeasonManagerTabName,
        FOnSpawnTab::CreateRaw(this, &FSeasonManagerModule::OnSpawnPluginTab)
    )
    .SetDisplayName( LOCTEXT("SeasonManagerTabTitle", "Season Manager") )
    .SetMenuType( ETabSpawnerMenuType::Hidden );
    
    UToolMenus::RegisterStartupCallback(
        FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSeasonManagerModule::RegisterMenus)
    );
#endif
}

void FSeasonManagerModule::ShutdownModule()
{
#if WITH_EDITOR
    UToolMenus::UnregisterOwner(this);
    FGlobalTabmanager::Get()->UnregisterNomadTabSpawner( SeasonManagerTabName );
#endif
}



#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSeasonManagerModule, SeasonManager)
