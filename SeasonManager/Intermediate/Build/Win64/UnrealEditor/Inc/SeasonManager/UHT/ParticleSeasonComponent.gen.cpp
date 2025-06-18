// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Components/ParticleSeasonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSeasonComponent() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonalParticleComponent();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonalParticleComponent_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonComponentBase();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Class USeasonalParticleComponent Function OnNiagaraFinished
struct Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics
{
	struct SeasonalParticleComponent_eventOnNiagaraFinished_Parms
	{
		UNiagaraComponent* FinishedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ParticleSeasonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::NewProp_FinishedComponent = { "FinishedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeasonalParticleComponent_eventOnNiagaraFinished_Parms, FinishedComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishedComponent_MetaData), NewProp_FinishedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::NewProp_FinishedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeasonalParticleComponent, nullptr, "OnNiagaraFinished", nullptr, nullptr, Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::SeasonalParticleComponent_eventOnNiagaraFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::SeasonalParticleComponent_eventOnNiagaraFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeasonalParticleComponent::execOnNiagaraFinished)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_FinishedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNiagaraFinished(Z_Param_FinishedComponent);
	P_NATIVE_END;
}
// End Class USeasonalParticleComponent Function OnNiagaraFinished

// Begin Class USeasonalParticleComponent
void USeasonalParticleComponent::StaticRegisterNativesUSeasonalParticleComponent()
{
	UClass* Class = USeasonalParticleComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnNiagaraFinished", &USeasonalParticleComponent::execOnNiagaraFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeasonalParticleComponent);
UClass* Z_Construct_UClass_USeasonalParticleComponent_NoRegister()
{
	return USeasonalParticleComponent::StaticClass();
}
struct Z_Construct_UClass_USeasonalParticleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ParticleSeasonComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ParticleSeasonComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USeasonalParticleComponent_OnNiagaraFinished, "OnNiagaraFinished" }, // 2112224303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonalParticleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USeasonalParticleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USeasonComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonalParticleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeasonalParticleComponent_Statics::ClassParams = {
	&USeasonalParticleComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeasonalParticleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USeasonalParticleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeasonalParticleComponent()
{
	if (!Z_Registration_Info_UClass_USeasonalParticleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeasonalParticleComponent.OuterSingleton, Z_Construct_UClass_USeasonalParticleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeasonalParticleComponent.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<USeasonalParticleComponent>()
{
	return USeasonalParticleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonalParticleComponent);
USeasonalParticleComponent::~USeasonalParticleComponent() {}
// End Class USeasonalParticleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_ParticleSeasonComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeasonalParticleComponent, USeasonalParticleComponent::StaticClass, TEXT("USeasonalParticleComponent"), &Z_Registration_Info_UClass_USeasonalParticleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeasonalParticleComponent), 4219067273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_ParticleSeasonComponent_h_1837478072(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_ParticleSeasonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_ParticleSeasonComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
