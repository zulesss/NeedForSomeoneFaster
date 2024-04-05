// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC/NPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef NEEDFORSOMEONEFASTER_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define NEEDFORSOMEONEFASTER_NPC_generated_h

#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_SPARSE_DATA
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPawnSeen);


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_ACCESSORS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeedForSomeoneFaster"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	virtual UObject* _getUObject() const override { return const_cast<ANPC*>(this); }


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC) \
	NO_API virtual ~ANPC();


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_11_PROLOG
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_SPARSE_DATA \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_ACCESSORS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<class ANPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_NPC_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
