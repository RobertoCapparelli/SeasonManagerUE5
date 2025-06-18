// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/SeasonBlendTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEASONMANAGER_SeasonBlendTypes_generated_h
#error "SeasonBlendTypes.generated.h already included, missing '#pragma once' in SeasonBlendTypes.h"
#endif
#define SEASONMANAGER_SeasonBlendTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_39345_Desktop_Progetti_Unreal_MotherNaturePack_Plugins_SeasonManager_Source_SeasonManager_Public_Utility_SeasonBlendTypes_h


#define FOREACH_ENUM_ESEASONBLENDTYPE(op) \
	op(ESeasonBlendType::Linear) \
	op(ESeasonBlendType::Instant) 

enum class ESeasonBlendType : uint8;
template<> struct TIsUEnumClass<ESeasonBlendType> { enum { Value = true }; };
template<> SEASONMANAGER_API UEnum* StaticEnum<ESeasonBlendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
