// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeasonManager/Public/Utility/SeasonBlendTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonBlendTypes() {}

// Begin Cross Module References
SEASONMANAGER_API UEnum* Z_Construct_UEnum_SeasonManager_ESeasonBlendType();
UPackage* Z_Construct_UPackage__Script_SeasonManager();
// End Cross Module References

// Begin Enum ESeasonBlendType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESeasonBlendType;
static UEnum* ESeasonBlendType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESeasonBlendType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESeasonBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeasonManager_ESeasonBlendType, (UObject*)Z_Construct_UPackage__Script_SeasonManager(), TEXT("ESeasonBlendType"));
	}
	return Z_Registration_Info_UEnum_ESeasonBlendType.OuterSingleton;
}
template<> SEASONMANAGER_API UEnum* StaticEnum<ESeasonBlendType>()
{
	return ESeasonBlendType_StaticEnum();
}
struct Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Instant.DisplayName", "Instant" },
		{ "Instant.Name", "ESeasonBlendType::Instant" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "ESeasonBlendType::Linear" },
		{ "ModuleRelativePath", "Public/Utility/SeasonBlendTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESeasonBlendType::Linear", (int64)ESeasonBlendType::Linear },
		{ "ESeasonBlendType::Instant", (int64)ESeasonBlendType::Instant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SeasonManager,
	nullptr,
	"ESeasonBlendType",
	"ESeasonBlendType",
	Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SeasonManager_ESeasonBlendType()
{
	if (!Z_Registration_Info_UEnum_ESeasonBlendType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESeasonBlendType.InnerSingleton, Z_Construct_UEnum_SeasonManager_ESeasonBlendType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESeasonBlendType.InnerSingleton;
}
// End Enum ESeasonBlendType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Utility_SeasonBlendTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESeasonBlendType_StaticEnum, TEXT("ESeasonBlendType"), &Z_Registration_Info_UEnum_ESeasonBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 629964890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Utility_SeasonBlendTypes_h_1533244645(TEXT("/Script/SeasonManager"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Utility_SeasonBlendTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Utility_SeasonBlendTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
