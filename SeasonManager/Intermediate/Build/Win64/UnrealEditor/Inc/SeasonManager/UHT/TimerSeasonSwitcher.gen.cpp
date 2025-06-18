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
SEASONMANAGER_API UEnum* Z_Construct_UEnum_SeasonManager_ESeasonPhase();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Enum ESeasonPhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESeasonPhase;
static UEnum* ESeasonPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESeasonPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESeasonPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeasonManager_ESeasonPhase, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("ESeasonPhase"));
	}
	return Z_Registration_Info_UEnum_ESeasonPhase.OuterSingleton;
}
template<> SEASONMANAGER_API UEnum* StaticEnum<ESeasonPhase>()
{
	return ESeasonPhase_StaticEnum();
}
struct Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Begin.DisplayName", "Begin" },
		{ "Begin.Name", "ESeasonPhase::Begin" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SEASON PHASE \n" },
#endif
		{ "Cooldown.DisplayName", "Cooldown" },
		{ "Cooldown.Name", "ESeasonPhase::Cooldown" },
		{ "End.DisplayName", "End" },
		{ "End.Name", "ESeasonPhase::End" },
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SEASON PHASE" },
#endif
		{ "Warmup.DisplayName", "Warmup" },
		{ "Warmup.Name", "ESeasonPhase::Warmup" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESeasonPhase::Warmup", (int64)ESeasonPhase::Warmup },
		{ "ESeasonPhase::Begin", (int64)ESeasonPhase::Begin },
		{ "ESeasonPhase::Cooldown", (int64)ESeasonPhase::Cooldown },
		{ "ESeasonPhase::End", (int64)ESeasonPhase::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	"ESeasonPhase",
	"ESeasonPhase",
	Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SeasonManager_ESeasonPhase()
{
	if (!Z_Registration_Info_UEnum_ESeasonPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESeasonPhase.InnerSingleton, Z_Construct_UEnum_SeasonManager_ESeasonPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESeasonPhase.InnerSingleton;
}
// End Enum ESeasonPhase

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
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
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

// Begin Class UTimerSeasonSwitcher Function GetCurrentPhase
struct Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics
{
	struct TimerSeasonSwitcher_eventGetCurrentPhase_Parms
	{
		ESeasonPhase ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Switcher" },
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerSeasonSwitcher_eventGetCurrentPhase_Parms, ReturnValue), Z_Construct_UEnum_SeasonManager_ESeasonPhase, METADATA_PARAMS(0, nullptr) }; // 2043437110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerSeasonSwitcher, nullptr, "GetCurrentPhase", nullptr, nullptr, Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::TimerSeasonSwitcher_eventGetCurrentPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::TimerSeasonSwitcher_eventGetCurrentPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimerSeasonSwitcher::execGetCurrentPhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESeasonPhase*)Z_Param__Result=P_THIS->GetCurrentPhase();
	P_NATIVE_END;
}
// End Class UTimerSeasonSwitcher Function GetCurrentPhase

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
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
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

// Begin Class UTimerSeasonSwitcher Function GetTimeToNextPhase
struct Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics
{
	struct TimerSeasonSwitcher_eventGetTimeToNextPhase_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season Switcher" },
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerSeasonSwitcher_eventGetTimeToNextPhase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerSeasonSwitcher, nullptr, "GetTimeToNextPhase", nullptr, nullptr, Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::TimerSeasonSwitcher_eventGetTimeToNextPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::TimerSeasonSwitcher_eventGetTimeToNextPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimerSeasonSwitcher::execGetTimeToNextPhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToNextPhase();
	P_NATIVE_END;
}
// End Class UTimerSeasonSwitcher Function GetTimeToNextPhase

// Begin Class UTimerSeasonSwitcher
void UTimerSeasonSwitcher::StaticRegisterNativesUTimerSeasonSwitcher()
{
	UClass* Class = UTimerSeasonSwitcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDefinition", &UTimerSeasonSwitcher::execGetCurrentDefinition },
		{ "GetCurrentPhase", &UTimerSeasonSwitcher::execGetCurrentPhase },
		{ "GetNormalizedProgress", &UTimerSeasonSwitcher::execGetNormalizedProgress },
		{ "GetTimeToNextPhase", &UTimerSeasonSwitcher::execGetTimeToNextPhase },
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
		{ "ModuleRelativePath", "Public/Switcher/TimerSeasonSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeasonSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeasonSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentDefinition, "GetCurrentDefinition" }, // 2434896417
		{ &Z_Construct_UFunction_UTimerSeasonSwitcher_GetCurrentPhase, "GetCurrentPhase" }, // 2476625192
		{ &Z_Construct_UFunction_UTimerSeasonSwitcher_GetNormalizedProgress, "GetNormalizedProgress" }, // 2055593344
		{ &Z_Construct_UFunction_UTimerSeasonSwitcher_GetTimeToNextPhase, "GetTimeToNextPhase" }, // 4007088775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerSeasonSwitcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence_Inner = { "SeasonSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence = { "SeasonSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerSeasonSwitcher, SeasonSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonSequence_MetaData), NewProp_SeasonSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerSeasonSwitcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerSeasonSwitcher_Statics::NewProp_SeasonSequence,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESeasonPhase_StaticEnum, TEXT("ESeasonPhase"), &Z_Registration_Info_UEnum_ESeasonPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2043437110U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimerSeasonSwitcher, UTimerSeasonSwitcher::StaticClass, TEXT("UTimerSeasonSwitcher"), &Z_Registration_Info_UClass_UTimerSeasonSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerSeasonSwitcher), 242556946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_1056358612(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
