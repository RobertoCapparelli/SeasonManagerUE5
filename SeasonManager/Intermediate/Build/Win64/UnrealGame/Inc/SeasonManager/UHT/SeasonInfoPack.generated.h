// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InfoPacks/SeasonInfoPack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEASONMANAGER_SeasonInfoPack_generated_h
#error "SeasonInfoPack.generated.h already included, missing '#pragma once' in SeasonInfoPack.h"
#endif
#define SEASONMANAGER_SeasonInfoPack_generated_h

#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSeasonMPCScalar_Statics; \
	SEASONMANAGER_API static class UScriptStruct* StaticStruct();


template<> SEASONMANAGER_API UScriptStruct* StaticStruct<struct FSeasonMPCScalar>();

#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSeasonMPCVector_Statics; \
	SEASONMANAGER_API static class UScriptStruct* StaticStruct();


template<> SEASONMANAGER_API UScriptStruct* StaticStruct<struct FSeasonMPCVector>();

#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSeasonInfoPack(); \
	friend struct Z_Construct_UClass_USeasonInfoPack_Statics; \
public: \
	DECLARE_CLASS(USeasonInfoPack, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeasonManager"), NO_API) \
	DECLARE_SERIALIZER(USeasonInfoPack)


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USeasonInfoPack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USeasonInfoPack(USeasonInfoPack&&); \
	USeasonInfoPack(const USeasonInfoPack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USeasonInfoPack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USeasonInfoPack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USeasonInfoPack) \
	NO_API virtual ~USeasonInfoPack();


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_52_PROLOG
#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_55_INCLASS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEASONMANAGER_API UClass* StaticClass<class USeasonInfoPack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_InfoPacks_SeasonInfoPack_h


#define FOREACH_ENUM_EPARAMUPDATEMODE(op) \
	op(EParamUpdateMode::Immediate) \
	op(EParamUpdateMode::OffScreen) 

enum class EParamUpdateMode : uint8;
template<> struct TIsUEnumClass<EParamUpdateMode> { enum { Value = true }; };
template<> SEASONMANAGER_API UEnum* StaticEnum<EParamUpdateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
