// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/InfoPacks/SeasonInfoPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonInfoPack() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPack();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPack_NoRegister();
SEASONMANAGER_API UEnum* Z_Construct_UEnum_SeasonManager_EParamUpdateMode();
SEASONMANAGER_API UEnum* Z_Construct_UEnum_SeasonManager_ESeasonBlendType();
SEASONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSeasonMPCScalar();
SEASONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSeasonMPCVector();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Enum EParamUpdateMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParamUpdateMode;
static UEnum* EParamUpdateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParamUpdateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParamUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeasonManager_EParamUpdateMode, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("EParamUpdateMode"));
	}
	return Z_Registration_Info_UEnum_EParamUpdateMode.OuterSingleton;
}
template<> SEASONMANAGER_API UEnum* StaticEnum<EParamUpdateMode>()
{
	return EParamUpdateMode_StaticEnum();
}
struct Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Immediate.DisplayName", "Immediate" },
		{ "Immediate.Name", "EParamUpdateMode::Immediate" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
		{ "OffScreen.DisplayName", "Only When Off-Screen" },
		{ "OffScreen.Name", "EParamUpdateMode::OffScreen" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EParamUpdateMode::Immediate", (int64)EParamUpdateMode::Immediate },
		{ "EParamUpdateMode::OffScreen", (int64)EParamUpdateMode::OffScreen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	"EParamUpdateMode",
	"EParamUpdateMode",
	Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SeasonManager_EParamUpdateMode()
{
	if (!Z_Registration_Info_UEnum_EParamUpdateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParamUpdateMode.InnerSingleton, Z_Construct_UEnum_SeasonManager_EParamUpdateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParamUpdateMode.InnerSingleton;
}
// End Enum EParamUpdateMode

// Begin ScriptStruct FSeasonMPCScalar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SeasonMPCScalar;
class UScriptStruct* FSeasonMPCScalar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SeasonMPCScalar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SeasonMPCScalar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeasonMPCScalar, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("SeasonMPCScalar"));
	}
	return Z_Registration_Info_UScriptStruct_SeasonMPCScalar.OuterSingleton;
}
template<> SEASONMANAGER_API UScriptStruct* StaticStruct<FSeasonMPCScalar>()
{
	return FSeasonMPCScalar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// piccolo contenitore per uno scalar param e il suo valore target\n" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "piccolo contenitore per uno scalar param e il suo valore target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
		{ "Category", "Season|MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMode_MetaData[] = {
		{ "Category", "Season|MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeasonMPCScalar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCScalar, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCScalar, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCScalar, BlendType), Z_Construct_UEnum_SeasonManager_ESeasonBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendType_MetaData), NewProp_BlendType_MetaData) }; // 1275642667
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCScalar, UpdateMode), Z_Construct_UEnum_SeasonManager_EParamUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateMode_MetaData), NewProp_UpdateMode_MetaData) }; // 331589737
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_BlendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	&NewStructOps,
	"SeasonMPCScalar",
	Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::PropPointers),
	sizeof(FSeasonMPCScalar),
	alignof(FSeasonMPCScalar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSeasonMPCScalar()
{
	if (!Z_Registration_Info_UScriptStruct_SeasonMPCScalar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SeasonMPCScalar.InnerSingleton, Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SeasonMPCScalar.InnerSingleton;
}
// End ScriptStruct FSeasonMPCScalar

// Begin ScriptStruct FSeasonMPCVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SeasonMPCVector;
class UScriptStruct* FSeasonMPCVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SeasonMPCVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SeasonMPCVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeasonMPCVector, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("SeasonMPCVector"));
	}
	return Z_Registration_Info_UScriptStruct_SeasonMPCVector.OuterSingleton;
}
template<> SEASONMANAGER_API UScriptStruct* StaticStruct<FSeasonMPCVector>()
{
	return FSeasonMPCVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSeasonMPCVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// idem per vettori\n" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "idem per vettori" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
		{ "Category", "Season|MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMode_MetaData[] = {
		{ "Category", "Season|MPC" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeasonMPCVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCVector, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCVector, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCVector, BlendType), Z_Construct_UEnum_SeasonManager_ESeasonBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendType_MetaData), NewProp_BlendType_MetaData) }; // 1275642667
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonMPCVector, UpdateMode), Z_Construct_UEnum_SeasonManager_EParamUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateMode_MetaData), NewProp_UpdateMode_MetaData) }; // 331589737
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_BlendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	&NewStructOps,
	"SeasonMPCVector",
	Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::PropPointers),
	sizeof(FSeasonMPCVector),
	alignof(FSeasonMPCVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSeasonMPCVector()
{
	if (!Z_Registration_Info_UScriptStruct_SeasonMPCVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SeasonMPCVector.InnerSingleton, Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SeasonMPCVector.InnerSingleton;
}
// End ScriptStruct FSeasonMPCVector

// Begin Class USeasonInfoPack
void USeasonInfoPack::StaticRegisterNativesUSeasonInfoPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeasonInfoPack);
UClass* Z_Construct_UClass_USeasonInfoPack_NoRegister()
{
	return USeasonInfoPack::StaticClass();
}
struct Z_Construct_UClass_USeasonInfoPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InfoPacks/SeasonInfoPack.h" },
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackTag_MetaData[] = {
		{ "Category", "InfoPack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag identificativo generico */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag identificativo generico" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[] = {
		{ "Category", "InfoPack|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** (Materiale) il Collection da cui importare TUTTI gli scalari e i vettori di default */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Materiale) il Collection da cui importare TUTTI gli scalari e i vettori di default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[] = {
		{ "Category", "InfoPack|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gli scalari importati + quelli aggiunti a mano */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gli scalari importati + quelli aggiunti a mano" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[] = {
		{ "Category", "InfoPack|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** I vettori importati + quelli aggiunti a mano */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/SeasonInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I vettori importati + quelli aggiunti a mano" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonInfoPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_PackTag = { "PackTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonInfoPack, PackTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackTag_MetaData), NewProp_PackTag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonInfoPack, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCollection_MetaData), NewProp_ParameterCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_ScalarParameters_Inner = { "ScalarParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSeasonMPCScalar, METADATA_PARAMS(0, nullptr) }; // 1649603633
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_ScalarParameters = { "ScalarParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonInfoPack, ScalarParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameters_MetaData), NewProp_ScalarParameters_MetaData) }; // 1649603633
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSeasonMPCVector, METADATA_PARAMS(0, nullptr) }; // 2080206102
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeasonInfoPack, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParameters_MetaData), NewProp_VectorParameters_MetaData) }; // 2080206102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeasonInfoPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_PackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_ParameterCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_ScalarParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_ScalarParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_VectorParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeasonInfoPack_Statics::NewProp_VectorParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonInfoPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USeasonInfoPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonInfoPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeasonInfoPack_Statics::ClassParams = {
	&USeasonInfoPack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USeasonInfoPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USeasonInfoPack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonInfoPack_Statics::Class_MetaDataParams), Z_Construct_UClass_USeasonInfoPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeasonInfoPack()
{
	if (!Z_Registration_Info_UClass_USeasonInfoPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeasonInfoPack.OuterSingleton, Z_Construct_UClass_USeasonInfoPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeasonInfoPack.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<USeasonInfoPack>()
{
	return USeasonInfoPack::StaticClass();
}
USeasonInfoPack::USeasonInfoPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonInfoPack);
USeasonInfoPack::~USeasonInfoPack() {}
// End Class USeasonInfoPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EParamUpdateMode_StaticEnum, TEXT("EParamUpdateMode"), &Z_Registration_Info_UEnum_EParamUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 331589737U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSeasonMPCScalar::StaticStruct, Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics::NewStructOps, TEXT("SeasonMPCScalar"), &Z_Registration_Info_UScriptStruct_SeasonMPCScalar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSeasonMPCScalar), 1649603633U) },
		{ FSeasonMPCVector::StaticStruct, Z_Construct_UScriptStruct_FSeasonMPCVector_Statics::NewStructOps, TEXT("SeasonMPCVector"), &Z_Registration_Info_UScriptStruct_SeasonMPCVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSeasonMPCVector), 2080206102U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeasonInfoPack, USeasonInfoPack::StaticClass, TEXT("USeasonInfoPack"), &Z_Registration_Info_UClass_USeasonInfoPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeasonInfoPack), 1900013534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_1687546187(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
