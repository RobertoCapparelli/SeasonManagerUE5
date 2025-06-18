// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SeasonComponentBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USeasonDefinition;
class USeasonInfoPackBase;
#ifdef SEASONMANAGER_SeasonComponentBase_generated_h
#error "SeasonComponentBase.generated.h already included, missing '#pragma once' in SeasonComponentBase.h"
#endif
#define SEASONMANAGER_SeasonComponentBase_generated_h

#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInfoPack); \
	DECLARE_FUNCTION(execOnSeasonEnd); \
	DECLARE_FUNCTION(execOnSeasonCooldown); \
	DECLARE_FUNCTION(execOnSeasonBegin); \
	DECLARE_FUNCTION(execOnSeasonWarmup);


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_CALLBACK_WRAPPERS
#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSeasonComponentBase(); \
	friend struct Z_Construct_UClass_USeasonComponentBase_Statics; \
public: \
	DECLARE_CLASS(USeasonComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeasonManager"), NO_API) \
	DECLARE_SERIALIZER(USeasonComponentBase)


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USeasonComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USeasonComponentBase(USeasonComponentBase&&); \
	USeasonComponentBase(const USeasonComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USeasonComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USeasonComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USeasonComponentBase) \
	NO_API virtual ~USeasonComponentBase();


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_12_PROLOG
#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_CALLBACK_WRAPPERS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEASONMANAGER_API UClass* StaticClass<class USeasonComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Components_SeasonComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
