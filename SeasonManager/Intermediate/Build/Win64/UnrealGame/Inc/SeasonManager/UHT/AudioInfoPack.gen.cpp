// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/InfoPacks/AudioInfoPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioInfoPack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UAudioInfoPack();
SEASONMANAGER_API UClass* Z_Construct_UClass_UAudioInfoPack_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPack();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class UAudioInfoPack
void UAudioInfoPack::StaticRegisterNativesUAudioInfoPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioInfoPack);
UClass* Z_Construct_UClass_UAudioInfoPack_NoRegister()
{
	return UAudioInfoPack::StaticClass();
}
struct Z_Construct_UClass_UAudioInfoPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * InfoPack specifico per l'audio stagionale.\n * Ogni stagione pu\xc3\xb2 specificare un suono ambientale con durata di fade.\n */" },
#endif
		{ "IncludePath", "InfoPacks/AudioInfoPack.h" },
		{ "ModuleRelativePath", "Public/InfoPacks/AudioInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InfoPack specifico per l'audio stagionale.\nOgni stagione pu\xc3\xb2 specificare un suono ambientale con durata di fade." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Suono ambientale associato alla stagione */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/AudioInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suono ambientale associato alla stagione" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Durata del fade-in all'ingresso nella stagione */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/AudioInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Durata del fade-in all'ingresso nella stagione" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Durata del fade-out all'uscita dalla stagione */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/AudioInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Durata del fade-out all'uscita dalla stagione" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioInfoPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioInfoPack_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioInfoPack, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioInfoPack_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioInfoPack, FadeInDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInDuration_MetaData), NewProp_FadeInDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioInfoPack_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioInfoPack, FadeOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutDuration_MetaData), NewProp_FadeOutDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioInfoPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioInfoPack_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioInfoPack_Statics::NewProp_FadeInDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioInfoPack_Statics::NewProp_FadeOutDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioInfoPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioInfoPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USeasonInfoPack,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioInfoPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioInfoPack_Statics::ClassParams = {
	&UAudioInfoPack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioInfoPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioInfoPack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioInfoPack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioInfoPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioInfoPack()
{
	if (!Z_Registration_Info_UClass_UAudioInfoPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioInfoPack.OuterSingleton, Z_Construct_UClass_UAudioInfoPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioInfoPack.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<UAudioInfoPack>()
{
	return UAudioInfoPack::StaticClass();
}
UAudioInfoPack::UAudioInfoPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioInfoPack);
UAudioInfoPack::~UAudioInfoPack() {}
// End Class UAudioInfoPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_AudioInfoPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioInfoPack, UAudioInfoPack::StaticClass, TEXT("UAudioInfoPack"), &Z_Registration_Info_UClass_UAudioInfoPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioInfoPack), 4012319442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_AudioInfoPack_h_4195198756(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_AudioInfoPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_AudioInfoPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
