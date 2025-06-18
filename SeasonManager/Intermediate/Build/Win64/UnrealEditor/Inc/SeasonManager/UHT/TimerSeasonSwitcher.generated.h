// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Switcher/TimerSeasonSwitcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USeasonDefinition;
enum class ESeasonPhase : uint8;
#ifdef SEASONMANAGER_TimerSeasonSwitcher_generated_h
#error "TimerSeasonSwitcher.generated.h already included, missing '#pragma once' in TimerSeasonSwitcher.h"
#endif
#define SEASONMANAGER_TimerSeasonSwitcher_generated_h

#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeToNextPhase); \
	DECLARE_FUNCTION(execGetCurrentPhase); \
	DECLARE_FUNCTION(execGetNormalizedProgress); \
	DECLARE_FUNCTION(execGetCurrentDefinition);


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimerSeasonSwitcher(); \
	friend struct Z_Construct_UClass_UTimerSeasonSwitcher_Statics; \
public: \
	DECLARE_CLASS(UTimerSeasonSwitcher, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeasonManager"), NO_API) \
	DECLARE_SERIALIZER(UTimerSeasonSwitcher)


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTimerSeasonSwitcher(UTimerSeasonSwitcher&&); \
	UTimerSeasonSwitcher(const UTimerSeasonSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerSeasonSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerSeasonSwitcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimerSeasonSwitcher) \
	NO_API virtual ~UTimerSeasonSwitcher();


#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_19_PROLOG
#define FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEASONMANAGER_API UClass* StaticClass<class UTimerSeasonSwitcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Switcher_TimerSeasonSwitcher_h


#define FOREACH_ENUM_ESEASONPHASE(op) \
	op(ESeasonPhase::Warmup) \
	op(ESeasonPhase::Begin) \
	op(ESeasonPhase::Cooldown) \
	op(ESeasonPhase::End) 

enum class ESeasonPhase : uint8;
template<> struct TIsUEnumClass<ESeasonPhase> { enum { Value = true }; };
template<> SEASONMANAGER_API UEnum* StaticEnum<ESeasonPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
