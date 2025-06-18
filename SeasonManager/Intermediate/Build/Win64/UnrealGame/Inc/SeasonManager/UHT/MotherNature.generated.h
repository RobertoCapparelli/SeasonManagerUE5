// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MotherNature.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USeasonDefinition;
#ifdef SEASONMANAGER_MotherNature_generated_h
#error "MotherNature.generated.h already included, missing '#pragma once' in MotherNature.h"
#endif
#define SEASONMANAGER_MotherNature_generated_h

#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_18_DELEGATE \
SEASONMANAGER_API void FOnSeasonChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSeasonChangedSignature, USeasonDefinition* NewSeason);


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormalizedTime); \
	DECLARE_FUNCTION(execGetCurrentDefinition); \
	DECLARE_FUNCTION(execNextSeason); \
	DECLARE_FUNCTION(execStartSeasons);


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMotherNature(); \
	friend struct Z_Construct_UClass_AMotherNature_Statics; \
public: \
	DECLARE_CLASS(AMotherNature, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeasonManager"), NO_API) \
	DECLARE_SERIALIZER(AMotherNature)


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMotherNature(AMotherNature&&); \
	AMotherNature(const AMotherNature&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotherNature); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotherNature); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMotherNature) \
	NO_API virtual ~AMotherNature();


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_19_PROLOG
#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEASONMANAGER_API UClass* StaticClass<class AMotherNature>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Core_MotherNature_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
