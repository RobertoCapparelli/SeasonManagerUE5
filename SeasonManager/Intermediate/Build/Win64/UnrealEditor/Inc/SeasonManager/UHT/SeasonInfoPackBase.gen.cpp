// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/InfoPacks/SeasonInfoPackBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonInfoPackBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPackBase();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPackBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class USeasonInfoPackBase
void USeasonInfoPackBase::StaticRegisterNativesUSeasonInfoPackBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeasonInfoPackBase);
UClass* Z_Construct_UClass_USeasonInfoPackBase_NoRegister()
{
	return USeasonInfoPackBase::StaticClass();
}
struct Z_Construct_UClass_USeasonInfoPackBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InfoPacks/SeasonInfoPackBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPackBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonInfoPackBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USeasonInfoPackBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonInfoPackBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeasonInfoPackBase_Statics::ClassParams = {
	&USeasonInfoPackBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonInfoPackBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USeasonInfoPackBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeasonInfoPackBase()
{
	if (!Z_Registration_Info_UClass_USeasonInfoPackBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeasonInfoPackBase.OuterSingleton, Z_Construct_UClass_USeasonInfoPackBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeasonInfoPackBase.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<USeasonInfoPackBase>()
{
	return USeasonInfoPackBase::StaticClass();
}
USeasonInfoPackBase::USeasonInfoPackBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonInfoPackBase);
USeasonInfoPackBase::~USeasonInfoPackBase() {}
// End Class USeasonInfoPackBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPackBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeasonInfoPackBase, USeasonInfoPackBase::StaticClass, TEXT("USeasonInfoPackBase"), &Z_Registration_Info_UClass_USeasonInfoPackBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeasonInfoPackBase), 1044108148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPackBase_h_4136494460(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPackBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPackBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
