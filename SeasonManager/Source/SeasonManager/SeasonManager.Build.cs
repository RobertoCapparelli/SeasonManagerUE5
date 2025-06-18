// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SeasonManager : ModuleRules
{
	public SeasonManager(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "Public"),
				Path.Combine(ModuleDirectory, "Public", "Core"),
				Path.Combine(ModuleDirectory, "Public", "Switcher"),
				Path.Combine(ModuleDirectory, "Public", "Components"),
				Path.Combine(ModuleDirectory, "Public", "Definitions"),
				Path.Combine(ModuleDirectory, "Public", "UI"),
				Path.Combine(ModuleDirectory, "Public", "InfoPacks"),
				Path.Combine(ModuleDirectory, "Public", "Utility"),
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "Private"),
				Path.Combine(ModuleDirectory, "Private", "Core"),
				Path.Combine(ModuleDirectory, "Private", "Switcher"),
				Path.Combine(ModuleDirectory, "Private", "Components"),
				Path.Combine(ModuleDirectory, "Private", "Definitions"),
				Path.Combine(ModuleDirectory, "Private", "UI"),
				Path.Combine(ModuleDirectory, "Private", "InfoPacks"),
				Path.Combine(ModuleDirectory, "Private", "Utility"),
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Niagara", 
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine", 
				
				
				
				
				
				// ... add private dependencies that you statically link with here ...	
			}
			);
		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Slate",
					"SlateCore",
					"ToolMenus",
					"LevelEditor",
					"UnrealEd", 
					"EditorStyle",

				}
			);
		}
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
