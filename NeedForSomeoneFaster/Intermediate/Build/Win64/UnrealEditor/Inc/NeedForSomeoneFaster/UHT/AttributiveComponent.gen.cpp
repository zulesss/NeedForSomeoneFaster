// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Components/AttributiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributiveComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UAttributiveComponent();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UAttributiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void UAttributiveComponent::StaticRegisterNativesUAttributiveComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributiveComponent);
	UClass* Z_Construct_UClass_UAttributiveComponent_NoRegister()
	{
		return UAttributiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttributiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperHitStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuperHitStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSuperHitStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSuperHitStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlowStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSlowStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperHitStaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuperHitStaminaRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowStaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowStaminaRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedStaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedStaminaRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttributiveComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStamina_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStamina = { "SuperHitStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, SuperHitStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStamina_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStamina_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStamina = { "SlowStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, SlowStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStamina_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStamina_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStamina = { "SpeedStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, SpeedStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStamina_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSuperHitStamina_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSuperHitStamina = { "MaxSuperHitStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, MaxSuperHitStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSuperHitStamina_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSuperHitStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSlowStamina_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSlowStamina = { "MaxSlowStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, MaxSlowStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSlowStamina_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSlowStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSpeedStamina_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSpeedStamina = { "MaxSpeedStamina", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, MaxSpeedStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSpeedStamina_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSpeedStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, HealthRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_HealthRegenRate_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_HealthRegenRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStaminaRegenRate_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStaminaRegenRate = { "SuperHitStaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, SuperHitStaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStaminaRegenRate_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStaminaRegenRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStaminaRegenRate_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStaminaRegenRate = { "SlowStaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, SlowStaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStaminaRegenRate_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStaminaRegenRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStaminaRegenRate_MetaData[] = {
		{ "Category", "AttributiveComponent" },
		{ "ModuleRelativePath", "Public/Components/AttributiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStaminaRegenRate = { "SpeedStaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributiveComponent, SpeedStaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStaminaRegenRate_MetaData), Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStaminaRegenRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributiveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSuperHitStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSlowStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_MaxSpeedStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_HealthRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SuperHitStaminaRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SlowStaminaRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributiveComponent_Statics::NewProp_SpeedStaminaRegenRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributiveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributiveComponent_Statics::ClassParams = {
		&UAttributiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributiveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributiveComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributiveComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttributiveComponent()
	{
		if (!Z_Registration_Info_UClass_UAttributiveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributiveComponent.OuterSingleton, Z_Construct_UClass_UAttributiveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributiveComponent.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<UAttributiveComponent>()
	{
		return UAttributiveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributiveComponent);
	UAttributiveComponent::~UAttributiveComponent() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Components_AttributiveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Components_AttributiveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributiveComponent, UAttributiveComponent::StaticClass, TEXT("UAttributiveComponent"), &Z_Registration_Info_UClass_UAttributiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributiveComponent), 1270287751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Components_AttributiveComponent_h_4286062707(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Components_AttributiveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Components_AttributiveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
