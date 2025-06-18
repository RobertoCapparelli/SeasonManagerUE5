// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Components/MaterialSeasonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialSeasonComponent() {}

// Begin Cross Module References
SEASONMANAGER_API UClass* Z_Construct_UClass_UMaterialSeasonComponent();
SEASONMANAGER_API UClass* Z_Construct_UClass_UMaterialSeasonComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonComponentBase();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class UMaterialSeasonComponent
void UMaterialSeasonComponent::StaticRegisterNativesUMaterialSeasonComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialSeasonComponent);
UClass* Z_Construct_UClass_UMaterialSeasonComponent_NoRegister()
{
	return UMaterialSeasonComponent::StaticClass();
}
struct Z_Construct_UClass_UMaterialSeasonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Season" },
		{ "IncludePath", "Components/MaterialSeasonComponent.h" },
		{ "ModuleRelativePath", "Public/Components/MaterialSeasonComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialSeasonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialSeasonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USeasonComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialSeasonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialSeasonComponent_Statics::ClassParams = {
	&UMaterialSeasonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialSeasonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialSeasonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialSeasonComponent()
{
	if (!Z_Registration_Info_UClass_UMaterialSeasonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialSeasonComponent.OuterSingleton, Z_Construct_UClass_UMaterialSeasonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialSeasonComponent.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<UMaterialSeasonComponent>()
{
	return UMaterialSeasonComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialSeasonComponent);
UMaterialSeasonComponent::~UMaterialSeasonComponent() {}
// End Class UMaterialSeasonComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_MaterialSeasonComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialSeasonComponent, UMaterialSeasonComponent::StaticClass, TEXT("UMaterialSeasonComponent"), &Z_Registration_Info_UClass_UMaterialSeasonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialSeasonComponent), 577573291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_MaterialSeasonComponent_h_4028926979(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_MaterialSeasonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_MaterialSeasonComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
