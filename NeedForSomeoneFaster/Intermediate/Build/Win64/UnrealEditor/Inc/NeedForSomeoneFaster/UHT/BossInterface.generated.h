// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BossInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEEDFORSOMEONEFASTER_BossInterface_generated_h
#error "BossInterface.generated.h already included, missing '#pragma once' in BossInterface.h"
#endif
#define NEEDFORSOMEONEFASTER_BossInterface_generated_h

#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_SPARSE_DATA
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_ACCESSORS
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEEDFORSOMEONEFASTER_API UBossInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NEEDFORSOMEONEFASTER_API UBossInterface(UBossInterface&&); \
	NEEDFORSOMEONEFASTER_API UBossInterface(const UBossInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEEDFORSOMEONEFASTER_API, UBossInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossInterface) \
	NEEDFORSOMEONEFASTER_API virtual ~UBossInterface();


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBossInterface(); \
	friend struct Z_Construct_UClass_UBossInterface_Statics; \
public: \
	DECLARE_CLASS(UBossInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NeedForSomeoneFaster"), NEEDFORSOMEONEFASTER_API) \
	DECLARE_SERIALIZER(UBossInterface)


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBossInterface() {} \
public: \
	typedef UBossInterface UClassType; \
	typedef IBossInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_10_PROLOG
#define FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_SPARSE_DATA \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_ACCESSORS \
	FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<class UBossInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_BossInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
