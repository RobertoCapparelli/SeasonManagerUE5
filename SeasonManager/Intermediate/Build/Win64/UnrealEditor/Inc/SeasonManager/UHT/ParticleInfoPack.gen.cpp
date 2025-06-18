// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/InfoPacks/ParticleInfoPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleInfoPack() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_UParticleInfoPack();
SEASONMANAGER_API UClass* Z_Construct_UClass_UParticleInfoPack_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonDefinition_NoRegister();
SEASONMANAGER_API UClass* Z_Construct_UClass_USeasonInfoPackBase();
SEASONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSpawnInfo();
SEASONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSeasonSpawnGroup();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin ScriptStruct FParticleSpawnInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSpawnInfo;
class UScriptStruct* FParticleSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSpawnInfo, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("ParticleSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSpawnInfo.OuterSingleton;
}
template<> SEASONMANAGER_API UScriptStruct* StaticStruct<FParticleSpawnInfo>()
{
	return FParticleSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Different approach\n * All packInfo in a single Asset and in Component take the current Season using argument\n */" },
#endif
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Different approach\n* All packInfo in a single Asset and in Component take the current Season using argument" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowPlayer_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOffset_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditCondition", "bFollowPlayer" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransforms_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditCondition", "!bFollowPlayer" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static void NewProp_bFollowPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSpawnInfo, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
void Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_bFollowPlayer_SetBit(void* Obj)
{
	((FParticleSpawnInfo*)Obj)->bFollowPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_bFollowPlayer = { "bFollowPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParticleSpawnInfo), &Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_bFollowPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowPlayer_MetaData), NewProp_bFollowPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_PlayerOffset = { "PlayerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSpawnInfo, PlayerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOffset_MetaData), NewProp_PlayerOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_SpawnTransforms_Inner = { "SpawnTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_SpawnTransforms = { "SpawnTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSpawnInfo, SpawnTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransforms_MetaData), NewProp_SpawnTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_bFollowPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_PlayerOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_SpawnTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewProp_SpawnTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	&NewStructOps,
	"ParticleSpawnInfo",
	Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::PropPointers),
	sizeof(FParticleSpawnInfo),
	alignof(FParticleSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleSpawnInfo.InnerSingleton;
}
// End ScriptStruct FParticleSpawnInfo

// Begin ScriptStruct FSeasonSpawnGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SeasonSpawnGroup;
class UScriptStruct* FSeasonSpawnGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SeasonSpawnGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SeasonSpawnGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeasonSpawnGroup, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("SeasonSpawnGroup"));
	}
	return Z_Registration_Info_UScriptStruct_SeasonSpawnGroup.OuterSingleton;
}
template<> SEASONMANAGER_API UScriptStruct* StaticStruct<FSeasonSpawnGroup>()
{
	return FSeasonSpawnGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonDefinition_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawns_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeasonDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeasonSpawnGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewProp_SeasonDefinition = { "SeasonDefinition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonSpawnGroup, SeasonDefinition), Z_Construct_UClass_USeasonDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonDefinition_MetaData), NewProp_SeasonDefinition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewProp_Spawns_Inner = { "Spawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParticleSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 512810125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewProp_Spawns = { "Spawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeasonSpawnGroup, Spawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawns_MetaData), NewProp_Spawns_MetaData) }; // 512810125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewProp_SeasonDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewProp_Spawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewProp_Spawns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	&NewStructOps,
	"SeasonSpawnGroup",
	Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::PropPointers),
	sizeof(FSeasonSpawnGroup),
	alignof(FSeasonSpawnGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSeasonSpawnGroup()
{
	if (!Z_Registration_Info_UScriptStruct_SeasonSpawnGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SeasonSpawnGroup.InnerSingleton, Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SeasonSpawnGroup.InnerSingleton;
}
// End ScriptStruct FSeasonSpawnGroup

// Begin Class UParticleInfoPack
void UParticleInfoPack::StaticRegisterNativesUParticleInfoPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleInfoPack);
UClass* Z_Construct_UClass_UParticleInfoPack_NoRegister()
{
	return UParticleInfoPack::StaticClass();
}
struct Z_Construct_UClass_UParticleInfoPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InfoPacks/ParticleInfoPack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnsBySeason_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/InfoPacks/ParticleInfoPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnsBySeason_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnsBySeason_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnsBySeason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleInfoPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleInfoPack_Statics::NewProp_SpawnsBySeason_ValueProp = { "SpawnsBySeason", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSeasonSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 3286455898
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleInfoPack_Statics::NewProp_SpawnsBySeason_Key_KeyProp = { "SpawnsBySeason_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UParticleInfoPack_Statics::NewProp_SpawnsBySeason = { "SpawnsBySeason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleInfoPack, SpawnsBySeason), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnsBySeason_MetaData), NewProp_SpawnsBySeason_MetaData) }; // 3286455898
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleInfoPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleInfoPack_Statics::NewProp_SpawnsBySeason_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleInfoPack_Statics::NewProp_SpawnsBySeason_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleInfoPack_Statics::NewProp_SpawnsBySeason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleInfoPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleInfoPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USeasonInfoPackBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SeasonManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleInfoPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleInfoPack_Statics::ClassParams = {
	&UParticleInfoPack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleInfoPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleInfoPack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleInfoPack_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleInfoPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleInfoPack()
{
	if (!Z_Registration_Info_UClass_UParticleInfoPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleInfoPack.OuterSingleton, Z_Construct_UClass_UParticleInfoPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleInfoPack.OuterSingleton;
}
template<> SEASONMANAGER_API UClass* StaticClass<UParticleInfoPack>()
{
	return UParticleInfoPack::StaticClass();
}
UParticleInfoPack::UParticleInfoPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleInfoPack);
UParticleInfoPack::~UParticleInfoPack() {}
// End Class UParticleInfoPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_ParticleInfoPack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FParticleSpawnInfo_Statics::NewStructOps, TEXT("ParticleSpawnInfo"), &Z_Registration_Info_UScriptStruct_ParticleSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSpawnInfo), 512810125U) },
		{ FSeasonSpawnGroup::StaticStruct, Z_Construct_UScriptStruct_FSeasonSpawnGroup_Statics::NewStructOps, TEXT("SeasonSpawnGroup"), &Z_Registration_Info_UScriptStruct_SeasonSpawnGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSeasonSpawnGroup), 3286455898U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleInfoPack, UParticleInfoPack::StaticClass, TEXT("UParticleInfoPack"), &Z_Registration_Info_UClass_UParticleInfoPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleInfoPack), 2929226352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_ParticleInfoPack_h_3870559567(TEXT("/Script/SeasonManager"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_ParticleInfoPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_ParticleInfoPack_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_ParticleInfoPack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_ParticleInfoPack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
