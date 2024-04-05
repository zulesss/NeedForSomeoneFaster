// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Enemy/Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_ABoss();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_AEnemy();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UBossInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void ABoss::StaticRegisterNativesABoss()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoss);
	UClass* Z_Construct_UClass_ABoss_NoRegister()
	{
		return ABoss::StaticClass();
	}
	struct Z_Construct_UClass_ABoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningEffects_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightningEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Boss.h" },
		{ "ModuleRelativePath", "Public/Enemy/Boss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_Enemies_MetaData[] = {
		{ "Category", "Boss" },
		{ "ModuleRelativePath", "Public/Enemy/Boss.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_Enemies_MetaData), Z_Construct_UClass_ABoss_Statics::NewProp_Enemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_NPC_MetaData[] = {
		{ "Category", "Boss" },
		{ "ModuleRelativePath", "Public/Enemy/Boss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss, NPC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_NPC_MetaData), Z_Construct_UClass_ABoss_Statics::NewProp_NPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_XOffset_MetaData[] = {
		{ "Category", "Boss" },
		{ "ModuleRelativePath", "Public/Enemy/Boss.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_XOffset = { "XOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss, XOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_XOffset_MetaData), Z_Construct_UClass_ABoss_Statics::NewProp_XOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_LightningEffects_MetaData[] = {
		{ "Category", "Boss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/Boss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_LightningEffects = { "LightningEffects", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss, LightningEffects), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_LightningEffects_MetaData), Z_Construct_UClass_ABoss_Statics::NewProp_LightningEffects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_Enemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_Enemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_NPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_XOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_LightningEffects,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABoss_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBossInterface_NoRegister, (int32)VTABLE_OFFSET(ABoss, IBossInterface), false },  // 2744053495
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Statics::ClassParams = {
		&ABoss::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoss_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoss()
	{
		if (!Z_Registration_Info_UClass_ABoss.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoss.OuterSingleton, Z_Construct_UClass_ABoss_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoss.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<ABoss>()
	{
		return ABoss::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss);
	ABoss::~ABoss() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Enemy_Boss_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Enemy_Boss_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoss, ABoss::StaticClass, TEXT("ABoss"), &Z_Registration_Info_UClass_ABoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoss), 1650563179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Enemy_Boss_h_1611843460(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Enemy_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Enemy_Boss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
