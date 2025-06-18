// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Components/AudioSeasonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSeasonComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UAudioSeasonComponent();
SEASONMANAGER_API UClass* Z_Construct_UClass_UAudioSeasonComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonComponentBase();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class UAudioSeasonComponent
void UAudioSeasonComponent::StaticRegisterNativesUAudioSeasonComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSeasonComponent);
UClass* Z_Construct_UClass_UAudioSeasonComponent_NoRegister()
{
	return UAudioSeasonComponent::StaticClass();
}
struct Z_Construct_UClass_UAudioSeasonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Season" },
		{ "IncludePath", "Components/AudioSeasonComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AudioSeasonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/AudioSeasonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSeasonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioSeasonComponent_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSeasonComponent, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComp_MetaData), NewProp_AudioComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSeasonComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSeasonComponent_Statics::NewProp_AudioComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSeasonComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioSeasonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USeasonComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSeasonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSeasonComponent_Statics::ClassParams = {
	&UAudioSeasonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioSeasonComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSeasonComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSeasonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSeasonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSeasonComponent()
{
	if (!Z_Registration_Info_UClass_UAudioSeasonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSeasonComponent.OuterSingleton, Z_Construct_UClass_UAudioSeasonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSeasonComponent.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<UAudioSeasonComponent>()
{
	return UAudioSeasonComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSeasonComponent);
UAudioSeasonComponent::~UAudioSeasonComponent() {}
// End Class UAudioSeasonComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_AudioSeasonComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSeasonComponent, UAudioSeasonComponent::StaticClass, TEXT("UAudioSeasonComponent"), &Z_Registration_Info_UClass_UAudioSeasonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSeasonComponent), 115317380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_AudioSeasonComponent_h_3105736918(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_AudioSeasonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_AudioSeasonComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
