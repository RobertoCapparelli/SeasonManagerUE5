// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Definitions/SeasonDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonDefinition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonDefinition();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonDefinition_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPack_NoRegister();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class USeasonDefinition
void USeasonDefinition::StaticRegisterNativesUSeasonDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeasonDefinition);
UClass* Z_Construct_UClass_USeasonDefinition_NoRegister()
{
	return USeasonDefinition::StaticClass();
}
struct Z_Construct_UClass_USeasonDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DataAsset che descrive una singola stagione:\n * - SeasonName: nome per UI/log\n * - DurationInSeconds: durata complessiva\n * - EnterPhaseRatio: frazione alla quale scatter\xc3\xa0 OnSeasonBegin\n * - ExitPhaseRatio: frazione alla quale scatter\xc3\xa0 OnSeasonCooldown\n * - InfoPacks: mappa di pacchetti dati stagionali (materiali, audio, eventi\xe2\x80\xa6)\n */" },
#endif
		{ "IncludePath", "Definitions/SeasonDefinition.h" },
		{ "ModuleRelativePath", "Public/Definitions/SeasonDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset che descrive una singola stagione:\n- SeasonName: nome per UI/log\n- DurationInSeconds: durata complessiva\n- EnterPhaseRatio: frazione alla quale scatter\xc3\xa0 OnSeasonBegin\n- ExitPhaseRatio: frazione alla quale scatter\xc3\xa0 OnSeasonCooldown\n- InfoPacks: mappa di pacchetti dati stagionali (materiali, audio, eventi\xe2\x80\xa6)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonName_MetaData[] = {
		{ "Category", "Season" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Nome descrittivo della stagione */" },
#endif
		{ "ModuleRelativePath", "Public/Definitions/SeasonDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nome descrittivo della stagione" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationInSeconds_MetaData[] = {
		{ "Category", "Season" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Durata totale della stagione in secondi */" },
#endif
		{ "ModuleRelativePath", "Public/Definitions/SeasonDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Durata totale della stagione in secondi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterPhaseRatio_MetaData[] = {
		{ "Category", "Phase Timing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Frazione [0\xe2\x80\x93""1] per OnSeasonBegin */" },
#endif
		{ "ModuleRelativePath", "Public/Definitions/SeasonDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frazione [0\xe2\x80\x93""1] per OnSeasonBegin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitPhaseRatio_MetaData[] = {
		{ "Category", "Phase Timing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Frazione [0\xe2\x80\x93""1] per OnSeasonCooldown */" },
#endif
		{ "ModuleRelativePath", "Public/Definitions/SeasonDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frazione [0\xe2\x80\x93""1] per OnSeasonCooldown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoPacks_MetaData[] = {
		{ "Category", "Info Packs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pacchetti dati specifici per questa stagione */" },
#endif
		{ "ModuleRelativePath", "Public/Definitions/SeasonDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pacchetti dati specifici per questa stagione" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SeasonName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationInSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterPhaseRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitPhaseRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoPacks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InfoPacks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InfoPacks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_SeasonName = { "SeasonName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonDefinition, SeasonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonName_MetaData), NewProp_SeasonName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_DurationInSeconds = { "DurationInSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonDefinition, DurationInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationInSeconds_MetaData), NewProp_DurationInSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_EnterPhaseRatio = { "EnterPhaseRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonDefinition, EnterPhaseRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterPhaseRatio_MetaData), NewProp_EnterPhaseRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_ExitPhaseRatio = { "ExitPhaseRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonDefinition, ExitPhaseRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitPhaseRatio_MetaData), NewProp_ExitPhaseRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_InfoPacks_ValueProp = { "InfoPacks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USeasonInfoPack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_InfoPacks_Key_KeyProp = { "InfoPacks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USeasonDefinition_Statics::NewProp_InfoPacks = { "InfoPacks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonDefinition, InfoPacks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoPacks_MetaData), NewProp_InfoPacks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeasonDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_SeasonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_DurationInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_EnterPhaseRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_ExitPhaseRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_InfoPacks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_InfoPacks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonDefinition_Statics::NewProp_InfoPacks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USeasonDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeasonDefinition_Statics::ClassParams = {
	&USeasonDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USeasonDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USeasonDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USeasonDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeasonDefinition()
{
	if (!Z_Registration_Info_UClass_USeasonDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeasonDefinition.OuterSingleton, Z_Construct_UClass_USeasonDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeasonDefinition.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<USeasonDefinition>()
{
	return USeasonDefinition::StaticClass();
}
USeasonDefinition::USeasonDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonDefinition);
USeasonDefinition::~USeasonDefinition() {}
// End Class USeasonDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Definitions_SeasonDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeasonDefinition, USeasonDefinition::StaticClass, TEXT("USeasonDefinition"), &Z_Registration_Info_UClass_USeasonDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeasonDefinition), 402099932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Definitions_SeasonDefinition_h_2457724920(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Definitions_SeasonDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Definitions_SeasonDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
