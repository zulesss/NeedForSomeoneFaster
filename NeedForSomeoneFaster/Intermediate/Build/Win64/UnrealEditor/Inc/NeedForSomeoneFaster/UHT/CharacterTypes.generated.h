// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEEDFORSOMEONEFASTER_CharacterTypes_generated_h
#error "CharacterTypes.generated.h already included, missing '#pragma once' in CharacterTypes.h"
#endif
#define NEEDFORSOMEONEFASTER_CharacterTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharacterTypes_h


#define FOREACH_ENUM_ESPEEDSTATE(op) \
	op(ESpeedState::ESS_Default) \
	op(ESpeedState::ESS_Speed) \
	op(ESpeedState::ESS_Slow) 

enum class ESpeedState : uint8;
template<> struct TIsUEnumClass<ESpeedState> { enum { Value = true }; };
template<> NEEDFORSOMEONEFASTER_API UEnum* StaticEnum<ESpeedState>();

#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Unoccupied) \
	op(ECharacterState::ECS_Engaged) \
	op(ECharacterState::ECS_Dead) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> NEEDFORSOMEONEFASTER_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
