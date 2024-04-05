// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Character/CharAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UCharAnimInstance();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UCharAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void UCharAnimInstance::StaticRegisterNativesUCharAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharAnimInstance);
	UClass* Z_Construct_UClass_UCharAnimInstance_NoRegister()
	{
		return UCharAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCharAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/CharAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/CharAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "CharAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/CharAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharAnimInstance, PlayerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerCharacter_MetaData), Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/CharAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerMovement = { "PlayerMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharAnimInstance, PlayerMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerMovement_MetaData), Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "CharAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/CharAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_GroundSpeed_MetaData), Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_GroundSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_PlayerMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_GroundSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharAnimInstance_Statics::ClassParams = {
		&UCharAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UCharAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharAnimInstance.OuterSingleton, Z_Construct_UClass_UCharAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharAnimInstance.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<UCharAnimInstance>()
	{
		return UCharAnimInstance::StaticClass();
	}
	UCharAnimInstance::UCharAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharAnimInstance);
	UCharAnimInstance::~UCharAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharAnimInstance, UCharAnimInstance::StaticClass, TEXT("UCharAnimInstance"), &Z_Registration_Info_UClass_UCharAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharAnimInstance), 3833461443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharAnimInstance_h_1547650642(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
