// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonManager_init() {}
	SEASONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SeasonManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SeasonManager()
	{
		if (!Z_Registration_Info_UPackage__Script_SeasonManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SeasonManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x94019572,
				0x9846F14D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SeasonManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SeasonManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SeasonManager(Z_Construct_UPackage__Script_SeasonManager, TEXT("/Script/SeasonManager"), Z_Registration_Info_UPackage__Script_SeasonManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x94019572, 0x9846F14D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
