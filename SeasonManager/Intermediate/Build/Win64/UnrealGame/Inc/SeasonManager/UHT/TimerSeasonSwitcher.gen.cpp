// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Switcher/TimerSeasonSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerSeasonSwitcher() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonDefinition_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UTimerSeasonSwitcher();
SEASONMANAGER_API UClass* Z_Construct_UClass_UTimerSeasonSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class UTimerSeasonSwitcher Function GetCurrentDefinition
struct Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics
{
	struct TimerSeasonSwitcher_eventGetCurrentDefinition_Parms
	{
		USeasonDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Switcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ritorna la definizione corrente (nullptr se invalida) */" },
#endif
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ritorna la definizione corrente (nullptr se invalida)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerSeasonSwitcher_eventGetCurrentDefinition_Parms, ReturnValue), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerSeasonSwitcher, nullptr, "GetCurrentDefinition", nullptr, nullptr, Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::TimerSeasonSwitcher_eventGetCurrentDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::TimerSeasonSwitcher_eventGetCurrentDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimerSeasonSwitcher::execGetCurrentDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USeasonDefinition**)Z_Param__Result=P_THIS->GetCurrentDefinition();
	P_NATIVE_END;
}
// End Class UTimerSeasonSwitcher Function GetCurrentDefinition

// Begin Class UTimerSeasonSwitcher Function GetNormalizedProgress
struct Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics
{
	struct TimerSeasonSwitcher_eventGetNormalizedProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Switcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ritorna il progresso normalizzato [0\xe2\x80\x93""1] della fase corrente */" },
#endif
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ritorna il progresso normalizzato [0\xe2\x80\x93""1] della fase corrente" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerSeasonSwitcher_eventGetNormalizedProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerSeasonSwitcher, nullptr, "GetNormalizedProgress", nullptr, nullptr, Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::TimerSeasonSwitcher_eventGetNormalizedProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::TimerSeasonSwitcher_eventGetNormalizedProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimerSeasonSwitcher::execGetNormalizedProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedProgress();
	P_NATIVE_END;
}
// End Class UTimerSeasonSwitcher Function GetNormalizedProgress

// Begin Class UTimerSeasonSwitcher
void UTimerSeasonSwitcher::StaticRegisterNativesUTimerSeasonSwitcher()
{
	UClass* Class = UTimerSeasonSwitcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDefinition", &UTimerSeasonSwitcher::execGetCurrentDefinition },
		{ "GetNormalizedProgress", &UTimerSeasonSwitcher::execGetNormalizedProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimerSeasonSwitcher);
UClass* Z_Construct_UClass_UTimerSeasonSwitcher_NoRegister()
{
	return UTimerSeasonSwitcher::StaticClass();
}
struct Z_Construct_UClass_UTimerSeasonSwitcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Season" },
		{ "IncludePath", "Switcher/TimerSeasonSwitcher.h" },
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonSequence_MetaData[] = {
		{ "Category", "Season Switcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** L\xe2\x80\x99""array di definizioni concrete impostato in editor */" },
#endif
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "L\xe2\x80\x99""array di definizioni concrete impostato in editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Switcher" },
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeasonSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeasonSequence;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition, "GetCurrentDefinition" }, // 1276535354
		{ &Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress, "GetNormalizedProgress" }, // 4133891296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerSeasonSwitcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence_Inner = { "SeasonSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence = { "SeasonSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerSeasonSwitcher, SeasonSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonSequence_MetaData), NewProp_SeasonSequence_MetaData) };
void Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((UTimerSeasonSwitcher*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimerSeasonSwitcher), &Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerSeasonSwitcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_bAutoStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerSeasonSwitcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimerSeasonSwitcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerSeasonSwitcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimerSeasonSwitcher_Statics::ClassParams = {
	&UTimerSeasonSwitcher::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimerSeasonSwitcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimerSeasonSwitcher_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerSeasonSwitcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimerSeasonSwitcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimerSeasonSwitcher()
{
	if (!Z_Registration_Info_UClass_UTimerSeasonSwitcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimerSeasonSwitcher.OuterSingleton, Z_Construct_UClass_UTimerSeasonSwitcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimerSeasonSwitcher.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<UTimerSeasonSwitcher>()
{
	return UTimerSeasonSwitcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerSeasonSwitcher);
UTimerSeasonSwitcher::~UTimerSeasonSwitcher() {}
// End Class UTimerSeasonSwitcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimerSeasonSwitcher, UTimerSeasonSwitcher::StaticClass, TEXT("UTimerSeasonSwitcher"), &Z_Registration_Info_UClass_UTimerSeasonSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerSeasonSwitcher), 789292496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_2906317658(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
