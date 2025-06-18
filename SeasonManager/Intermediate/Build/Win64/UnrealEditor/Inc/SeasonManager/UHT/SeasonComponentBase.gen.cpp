// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Components/SeasonComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonComponentBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonComponentBase();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonComponentBase_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonDefinition_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPackBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class USeasonComponentBase Function GetInfoPack
struct Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics
{
	struct SeasonComponentBase_eventGetInfoPack_Parms
	{
		USeasonDefinition* Definition;
		TSubclassOf<USeasonInfoPackBase> PackClass;
		USeasonInfoPackBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get pack in blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SeasonComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get pack in blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PackClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventGetInfoPack_Parms, Definition), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::NewProp_PackClass = { "PackClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventGetInfoPack_Parms, PackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USeasonInfoPackBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventGetInfoPack_Parms, ReturnValue), Z_Construct_UClass_USeasonInfoPackBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::NewProp_PackClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonComponentBase, nullptr, "GetInfoPack", nullptr, nullptr, Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::PropPointers), sizeof(Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::SeasonComponentBase_eventGetInfoPack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::SeasonComponentBase_eventGetInfoPack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeasonComponentBase_GetInfoPack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeasonComponentBase_GetInfoPack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeasonComponentBase::execGetInfoPack)
{
	P_GET_OBJECT(USeasonDefinition,Z_Param_Definition);
	P_GET_OBJECT(UClass,Z_Param_PackClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USeasonInfoPackBase**)Z_Param__Result=P_THIS->GetInfoPack(Z_Param_Definition,Z_Param_PackClass);
	P_NATIVE_END;
}
// End Class USeasonComponentBase Function GetInfoPack

// Begin Class USeasonComponentBase Function OnSeasonBegin
struct SeasonComponentBase_eventOnSeasonBegin_Parms
{
	USeasonDefinition* Def;
	float Norm;
};
static FName NAME_USeasonComponentBase_OnSeasonBegin = FName(TEXT("OnSeasonBegin"));
void USeasonComponentBase::OnSeasonBegin(USeasonDefinition* Def, float Norm)
{
	SeasonComponentBase_eventOnSeasonBegin_Parms Parms;
	Parms.Def=Def;
	Parms.Norm=Norm;
	ProcessEvent(FindFunctionChecked(NAME_USeasonComponentBase_OnSeasonBegin),&Parms);
}
struct Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season" },
		{ "ModuleRelativePath", "Public/Components/SeasonComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Def;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Norm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonBegin_Parms, Def), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::NewProp_Norm = { "Norm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonBegin_Parms, Norm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::NewProp_Def,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::NewProp_Norm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonComponentBase, nullptr, "OnSeasonBegin", nullptr, nullptr, Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::PropPointers), sizeof(SeasonComponentBase_eventOnSeasonBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(SeasonComponentBase_eventOnSeasonBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeasonComponentBase::execOnSeasonBegin)
{
	P_GET_OBJECT(USeasonDefinition,Z_Param_Def);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Norm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeasonBegin_Implementation(Z_Param_Def,Z_Param_Norm);
	P_NATIVE_END;
}
// End Class USeasonComponentBase Function OnSeasonBegin

// Begin Class USeasonComponentBase Function OnSeasonCooldown
struct SeasonComponentBase_eventOnSeasonCooldown_Parms
{
	USeasonDefinition* Def;
	float Norm;
};
static FName NAME_USeasonComponentBase_OnSeasonCooldown = FName(TEXT("OnSeasonCooldown"));
void USeasonComponentBase::OnSeasonCooldown(USeasonDefinition* Def, float Norm)
{
	SeasonComponentBase_eventOnSeasonCooldown_Parms Parms;
	Parms.Def=Def;
	Parms.Norm=Norm;
	ProcessEvent(FindFunctionChecked(NAME_USeasonComponentBase_OnSeasonCooldown),&Parms);
}
struct Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season" },
		{ "ModuleRelativePath", "Public/Components/SeasonComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Def;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Norm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonCooldown_Parms, Def), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::NewProp_Norm = { "Norm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonCooldown_Parms, Norm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::NewProp_Def,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::NewProp_Norm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonComponentBase, nullptr, "OnSeasonCooldown", nullptr, nullptr, Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::PropPointers), sizeof(SeasonComponentBase_eventOnSeasonCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(SeasonComponentBase_eventOnSeasonCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeasonComponentBase::execOnSeasonCooldown)
{
	P_GET_OBJECT(USeasonDefinition,Z_Param_Def);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Norm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeasonCooldown_Implementation(Z_Param_Def,Z_Param_Norm);
	P_NATIVE_END;
}
// End Class USeasonComponentBase Function OnSeasonCooldown

// Begin Class USeasonComponentBase Function OnSeasonEnd
struct SeasonComponentBase_eventOnSeasonEnd_Parms
{
	USeasonDefinition* Def;
	float Norm;
};
static FName NAME_USeasonComponentBase_OnSeasonEnd = FName(TEXT("OnSeasonEnd"));
void USeasonComponentBase::OnSeasonEnd(USeasonDefinition* Def, float Norm)
{
	SeasonComponentBase_eventOnSeasonEnd_Parms Parms;
	Parms.Def=Def;
	Parms.Norm=Norm;
	ProcessEvent(FindFunctionChecked(NAME_USeasonComponentBase_OnSeasonEnd),&Parms);
}
struct Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season" },
		{ "ModuleRelativePath", "Public/Components/SeasonComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Def;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Norm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonEnd_Parms, Def), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::NewProp_Norm = { "Norm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonEnd_Parms, Norm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::NewProp_Def,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::NewProp_Norm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonComponentBase, nullptr, "OnSeasonEnd", nullptr, nullptr, Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::PropPointers), sizeof(SeasonComponentBase_eventOnSeasonEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(SeasonComponentBase_eventOnSeasonEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeasonComponentBase::execOnSeasonEnd)
{
	P_GET_OBJECT(USeasonDefinition,Z_Param_Def);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Norm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeasonEnd_Implementation(Z_Param_Def,Z_Param_Norm);
	P_NATIVE_END;
}
// End Class USeasonComponentBase Function OnSeasonEnd

// Begin Class USeasonComponentBase Function OnSeasonWarmup
struct SeasonComponentBase_eventOnSeasonWarmup_Parms
{
	USeasonDefinition* Def;
	float Norm;
};
static FName NAME_USeasonComponentBase_OnSeasonWarmup = FName(TEXT("OnSeasonWarmup"));
void USeasonComponentBase::OnSeasonWarmup(USeasonDefinition* Def, float Norm)
{
	SeasonComponentBase_eventOnSeasonWarmup_Parms Parms;
	Parms.Def=Def;
	Parms.Norm=Norm;
	ProcessEvent(FindFunctionChecked(NAME_USeasonComponentBase_OnSeasonWarmup),&Parms);
}
struct Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Season" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function called from TimerSeasoonSwitcher, principal functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SeasonComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called from TimerSeasoonSwitcher, principal functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Def;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Norm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonWarmup_Parms, Def), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::NewProp_Norm = { "Norm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonComponentBase_eventOnSeasonWarmup_Parms, Norm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::NewProp_Def,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::NewProp_Norm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonComponentBase, nullptr, "OnSeasonWarmup", nullptr, nullptr, Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::PropPointers), sizeof(SeasonComponentBase_eventOnSeasonWarmup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::Function_MetaDataParams) };
static_assert(sizeof(SeasonComponentBase_eventOnSeasonWarmup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeasonComponentBase::execOnSeasonWarmup)
{
	P_GET_OBJECT(USeasonDefinition,Z_Param_Def);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Norm);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeasonWarmup_Implementation(Z_Param_Def,Z_Param_Norm);
	P_NATIVE_END;
}
// End Class USeasonComponentBase Function OnSeasonWarmup

// Begin Class USeasonComponentBase
void USeasonComponentBase::StaticRegisterNativesUSeasonComponentBase()
{
	UClass* Class = USeasonComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInfoPack", &USeasonComponentBase::execGetInfoPack },
		{ "OnSeasonBegin", &USeasonComponentBase::execOnSeasonBegin },
		{ "OnSeasonCooldown", &USeasonComponentBase::execOnSeasonCooldown },
		{ "OnSeasonEnd", &USeasonComponentBase::execOnSeasonEnd },
		{ "OnSeasonWarmup", &USeasonComponentBase::execOnSeasonWarmup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeasonComponentBase);
UClass* Z_Construct_UClass_USeasonComponentBase_NoRegister()
{
	return USeasonComponentBase::StaticClass();
}
struct Z_Construct_UClass_USeasonComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Season" },
		{ "IncludePath", "Components/SeasonComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SeasonComponentBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USeasonComponentBase_GetInfoPack, "GetInfoPack" }, // 2425648979
		{ &Z_Construct_UFunction_USeasonComponentBase_OnSeasonBegin, "OnSeasonBegin" }, // 3465420062
		{ &Z_Construct_UFunction_USeasonComponentBase_OnSeasonCooldown, "OnSeasonCooldown" }, // 3647072143
		{ &Z_Construct_UFunction_USeasonComponentBase_OnSeasonEnd, "OnSeasonEnd" }, // 1378961828
		{ &Z_Construct_UFunction_USeasonComponentBase_OnSeasonWarmup, "OnSeasonWarmup" }, // 2426665169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USeasonComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeasonComponentBase_Statics::ClassParams = {
	&USeasonComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USeasonComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeasonComponentBase()
{
	if (!Z_Registration_Info_UClass_USeasonComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeasonComponentBase.OuterSingleton, Z_Construct_UClass_USeasonComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeasonComponentBase.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<USeasonComponentBase>()
{
	return USeasonComponentBase::StaticClass();
}
USeasonComponentBase::USeasonComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonComponentBase);
USeasonComponentBase::~USeasonComponentBase() {}
// End Class USeasonComponentBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeasonComponentBase, USeasonComponentBase::StaticClass, TEXT("USeasonComponentBase"), &Z_Registration_Info_UClass_USeasonComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeasonComponentBase), 2079384859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_1486122395(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
