// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Hud/PlayerOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOverlay() {}
// Cross Module References
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UPlayerOverlay();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void UPlayerOverlay::StaticRegisterNativesUPlayerOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerOverlay);
	UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister()
	{
		return UPlayerOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedStaminaBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedStaminaBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowStaminaBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlowStaminaBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperAttackBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperAttackBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NpcText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NpcText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BossText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BossText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Hud/PlayerOverlay.h" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SpeedStaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SpeedStaminaBar = { "SpeedStaminaBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerOverlay, SpeedStaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SpeedStaminaBar_MetaData), Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SpeedStaminaBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SlowStaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SlowStaminaBar = { "SlowStaminaBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerOverlay, SlowStaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SlowStaminaBar_MetaData), Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SlowStaminaBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SuperAttackBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SuperAttackBar = { "SuperAttackBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerOverlay, SuperAttackBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SuperAttackBar_MetaData), Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SuperAttackBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_NpcText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_NpcText = { "NpcText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerOverlay, NpcText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_NpcText_MetaData), Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_NpcText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_BossText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_BossText = { "BossText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerOverlay, BossText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_BossText_MetaData), Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_BossText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SpeedStaminaBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SlowStaminaBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_SuperAttackBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_NpcText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_BossText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams = {
		&UPlayerOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerOverlay()
	{
		if (!Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton, Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<UPlayerOverlay>()
	{
		return UPlayerOverlay::StaticClass();
	}
	UPlayerOverlay::UPlayerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerOverlay);
	UPlayerOverlay::~UPlayerOverlay() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerOverlay, UPlayerOverlay::StaticClass, TEXT("UPlayerOverlay"), &Z_Registration_Info_UClass_UPlayerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerOverlay), 3352131380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerOverlay_h_1059688392(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
