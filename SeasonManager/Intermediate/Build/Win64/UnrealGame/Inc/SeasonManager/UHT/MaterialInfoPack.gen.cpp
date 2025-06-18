// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/InfoPacks/MaterialInfoPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInfoPack() {}

// Begin Cross Module References
SEASONMANAGER_API UClass* Z_Construct_UClass_UMaterialInfoPack();
SEASONMANAGER_API UClass* Z_Construct_UClass_UMaterialInfoPack_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPack();
SEASONMANAGER_API UEnum* Z_Construct_UEnum_SeasonManager_ESeasonBlendType();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class UMaterialInfoPack
void UMaterialInfoPack::StaticRegisterNativesUMaterialInfoPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInfoPack);
UClass* Z_Construct_UClass_UMaterialInfoPack_NoRegister()
{
	return UMaterialInfoPack::StaticClass();
}
struct Z_Construct_UClass_UMaterialInfoPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  DataAsset che contiene TUTTI i parametri materiali per una stagione:\n *   - eredita da USeasonInfoPack (ha gi\xc3\xa0 ParameterCollection, ScalarParameters, VectorParameters)\n *   - aggiunge come opzionale il tipo di easing e se fare HSV lerp sui colori\n */" },
#endif
		{ "IncludePath", "InfoPacks/MaterialInfoPack.h" },
		{ "ModuleRelativePath", "Public/InfoPacks/MaterialInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset che contiene TUTTI i parametri materiali per una stagione:\n - eredita da USeasonInfoPack (ha gi\xc3\xa0 ParameterCollection, ScalarParameters, VectorParameters)\n - aggiunge come opzionale il tipo di easing e se fare HSV lerp sui colori" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
		{ "Category", "Blend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Che easing usare per tutti i blend in questo pack */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/MaterialInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Che easing usare per tutti i blend in questo pack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendColorInHSV_MetaData[] = {
		{ "Category", "Blend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Se true, i colori vengono interpolati in HSV anzich\xc3\xa9 RGB */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/MaterialInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Se true, i colori vengono interpolati in HSV anzich\xc3\xa9 RGB" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredActorTag_MetaData[] = {
		{ "Category", "Deferred" },
		{ "ModuleRelativePath", "Public/InfoPacks/MaterialInfoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
	static void NewProp_bBlendColorInHSV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendColorInHSV;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeferredActorTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInfoPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInfoPack, BlendType), Z_Construct_UEnum_SeasonManager_ESeasonBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendType_MetaData), NewProp_BlendType_MetaData) }; // 1275642667
void Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_bBlendColorInHSV_SetBit(void* Obj)
{
	((UMaterialInfoPack*)Obj)->bBlendColorInHSV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_bBlendColorInHSV = { "bBlendColorInHSV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialInfoPack), &Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_bBlendColorInHSV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendColorInHSV_MetaData), NewProp_bBlendColorInHSV_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_DeferredActorTag = { "DeferredActorTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInfoPack, DeferredActorTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredActorTag_MetaData), NewProp_DeferredActorTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInfoPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_BlendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_bBlendColorInHSV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInfoPack_Statics::NewProp_DeferredActorTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInfoPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialInfoPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USeasonInfoPack,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInfoPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInfoPack_Statics::ClassParams = {
	&UMaterialInfoPack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialInfoPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInfoPack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInfoPack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialInfoPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialInfoPack()
{
	if (!Z_Registration_Info_UClass_UMaterialInfoPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInfoPack.OuterSingleton, Z_Construct_UClass_UMaterialInfoPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialInfoPack.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<UMaterialInfoPack>()
{
	return UMaterialInfoPack::StaticClass();
}
UMaterialInfoPack::UMaterialInfoPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInfoPack);
UMaterialInfoPack::~UMaterialInfoPack() {}
// End Class UMaterialInfoPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_MaterialInfoPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInfoPack, UMaterialInfoPack::StaticClass, TEXT("UMaterialInfoPack"), &Z_Registration_Info_UClass_UMaterialInfoPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInfoPack), 3116457918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_MaterialInfoPack_h_667078424(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_MaterialInfoPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_MaterialInfoPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
