// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Core/MotherNature.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotherNature() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SEASONMANAGER_API UClass* Z_Construct_UClass_AMotherNature();
SEASONMANAGER_API UClass* Z_Construct_UClass_AMotherNature_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UAudioSeasonComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UMaterialSeasonComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonalParticleComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonDefinition_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UTimerSeasonSwitcher_NoRegister();
SEASONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Delegate FOnSeasonChangedSignature
struct Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics
{
	struct _Script_SeasonManager_eventOnSeasonChangedSignature_Parms
	{
		USeasonDefinition* NewSeason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSeason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::NewProp_NewSeason = { "NewSeason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SeasonManager_eventOnSeasonChangedSignature_Parms, NewSeason), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::NewProp_NewSeason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeasonManager, nullptr, "OnSeasonChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::_Script_SeasonManager_eventOnSeasonChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::_Script_SeasonManager_eventOnSeasonChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSeasonChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSeasonChangedSignature, USeasonDefinition* NewSeason)
{
	struct _Script_SeasonManager_eventOnSeasonChangedSignature_Parms
	{
		USeasonDefinition* NewSeason;
	};
	_Script_SeasonManager_eventOnSeasonChangedSignature_Parms Parms;
	Parms.NewSeason=NewSeason;
	OnSeasonChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSeasonChangedSignature

// Begin Class AMotherNature Function GetCurrentDefinition
struct Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics
{
	struct MotherNature_eventGetCurrentDefinition_Parms
	{
		USeasonDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Manager" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotherNature_eventGetCurrentDefinition_Parms, ReturnValue), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotherNature, nullptr, "GetCurrentDefinition", nullptr, nullptr, Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::MotherNature_eventGetCurrentDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::MotherNature_eventGetCurrentDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMotherNature_GetCurrentDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotherNature_GetCurrentDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotherNature::execGetCurrentDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USeasonDefinition**)Z_Param__Result=P_THIS->GetCurrentDefinition();
	P_NATIVE_END;
}
// End Class AMotherNature Function GetCurrentDefinition

// Begin Class AMotherNature Function GetNormalizedTime
struct Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics
{
	struct MotherNature_eventGetNormalizedTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Manager" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotherNature_eventGetNormalizedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotherNature, nullptr, "GetNormalizedTime", nullptr, nullptr, Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::MotherNature_eventGetNormalizedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::MotherNature_eventGetNormalizedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMotherNature_GetNormalizedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotherNature_GetNormalizedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotherNature::execGetNormalizedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedTime();
	P_NATIVE_END;
}
// End Class AMotherNature Function GetNormalizedTime

// Begin Class AMotherNature Function NextSeason
struct Z_Construct_UFunction_AMotherNature_NextSeason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Manager" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotherNature_NextSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotherNature, nullptr, "NextSeason", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_NextSeason_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotherNature_NextSeason_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMotherNature_NextSeason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotherNature_NextSeason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotherNature::execNextSeason)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextSeason();
	P_NATIVE_END;
}
// End Class AMotherNature Function NextSeason

// Begin Class AMotherNature Function StartSeasons
struct Z_Construct_UFunction_AMotherNature_StartSeasons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Manager" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotherNature_StartSeasons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotherNature, nullptr, "StartSeasons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotherNature_StartSeasons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotherNature_StartSeasons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMotherNature_StartSeasons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotherNature_StartSeasons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotherNature::execStartSeasons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSeasons();
	P_NATIVE_END;
}
// End Class AMotherNature Function StartSeasons

// Begin Class AMotherNature
void AMotherNature::StaticRegisterNativesAMotherNature()
{
	UClass* Class = AMotherNature::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDefinition", &AMotherNature::execGetCurrentDefinition },
		{ "GetNormalizedTime", &AMotherNature::execGetNormalizedTime },
		{ "NextSeason", &AMotherNature::execNextSeason },
		{ "StartSeasons", &AMotherNature::execStartSeasons },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMotherNature);
UClass* Z_Construct_UClass_AMotherNature_NoRegister()
{
	return AMotherNature::StaticClass();
}
struct Z_Construct_UClass_AMotherNature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/MotherNature.h" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeasonChanged_MetaData[] = {
		{ "Category", "Season Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate completo per Blueprint: fine stagione */" },
#endif
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate completo per Blueprint: fine stagione" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSeasonComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Season" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSeasonComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Season" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFXSeasonComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Season" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MotherNature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MotherNature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeasonChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSeasonComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioSeasonComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFXSeasonComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Switcher;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotherNature_GetCurrentDefinition, "GetCurrentDefinition" }, // 3630402435
		{ &Z_Construct_UFunction_AMotherNature_GetNormalizedTime, "GetNormalizedTime" }, // 1279836712
		{ &Z_Construct_UFunction_AMotherNature_NextSeason, "NextSeason" }, // 308668602
		{ &Z_Construct_UFunction_AMotherNature_StartSeasons, "StartSeasons" }, // 126990574
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotherNature>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMotherNature_Statics::NewProp_OnSeasonChanged = { "OnSeasonChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotherNature, OnSeasonChanged), Z_Construct_UDelegateFunction_SeasonManager_OnSeasonChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeasonChanged_MetaData), NewProp_OnSeasonChanged_MetaData) }; // 4088318136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotherNature_Statics::NewProp_MaterialSeasonComp = { "MaterialSeasonComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotherNature, MaterialSeasonComp), Z_Construct_UClass_UMaterialSeasonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSeasonComp_MetaData), NewProp_MaterialSeasonComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotherNature_Statics::NewProp_AudioSeasonComp = { "AudioSeasonComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotherNature, AudioSeasonComp), Z_Construct_UClass_UAudioSeasonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSeasonComp_MetaData), NewProp_AudioSeasonComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotherNature_Statics::NewProp_VFXSeasonComp = { "VFXSeasonComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotherNature, VFXSeasonComp), Z_Construct_UClass_USeasonalParticleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFXSeasonComp_MetaData), NewProp_VFXSeasonComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotherNature_Statics::NewProp_Switcher = { "Switcher", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMotherNature, Switcher), Z_Construct_UClass_UTimerSeasonSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switcher_MetaData), NewProp_Switcher_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotherNature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotherNature_Statics::NewProp_OnSeasonChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotherNature_Statics::NewProp_MaterialSeasonComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotherNature_Statics::NewProp_AudioSeasonComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotherNature_Statics::NewProp_VFXSeasonComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotherNature_Statics::NewProp_Switcher,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMotherNature_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMotherNature_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMotherNature_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMotherNature_Statics::ClassParams = {
	&AMotherNature::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMotherNature_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMotherNature_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMotherNature_Statics::Class_MetaDataParams), Z_Construct_UClass_AMotherNature_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMotherNature()
{
	if (!Z_Registration_Info_UClass_AMotherNature.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMotherNature.OuterSingleton, Z_Construct_UClass_AMotherNature_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMotherNature.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<AMotherNature>()
{
	return AMotherNature::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMotherNature);
AMotherNature::~AMotherNature() {}
// End Class AMotherNature

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMotherNature, AMotherNature::StaticClass, TEXT("AMotherNature"), &Z_Registration_Info_UClass_AMotherNature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMotherNature), 4093803683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_978307818(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
