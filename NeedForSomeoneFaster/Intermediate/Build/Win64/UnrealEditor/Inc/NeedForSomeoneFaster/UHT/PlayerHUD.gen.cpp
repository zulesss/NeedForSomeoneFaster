// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Hud/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_APlayerHUD();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void APlayerHUD::StaticRegisterNativesAPlayerHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerHUD);
	UClass* Z_Construct_UClass_APlayerHUD_NoRegister()
	{
		return APlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Hud/PlayerHUD.h" },
		{ "ModuleRelativePath", "Public/Hud/PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass_MetaData[] = {
		{ "Category", "Overlay Class" },
		{ "ModuleRelativePath", "Public/Hud/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass = { "PlayerOverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerHUD, PlayerOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass_MetaData), Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay = { "PlayerOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerHUD, PlayerOverlay), Z_Construct_UClass_UPlayerOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay_MetaData), Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerHUD_Statics::ClassParams = {
		&APlayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerHUD()
	{
		if (!Z_Registration_Info_UClass_APlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerHUD.OuterSingleton, Z_Construct_UClass_APlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerHUD.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<APlayerHUD>()
	{
		return APlayerHUD::StaticClass();
	}
	APlayerHUD::APlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHUD);
	APlayerHUD::~APlayerHUD() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerHUD, APlayerHUD::StaticClass, TEXT("APlayerHUD"), &Z_Registration_Info_UClass_APlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerHUD), 1208144672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerHUD_h_2835039165(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
