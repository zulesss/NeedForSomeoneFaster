// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Hud/StartHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_AStartHUD();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_AStartHUD_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UStartOverlay_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void AStartHUD::StaticRegisterNativesAStartHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStartHUD);
	UClass* Z_Construct_UClass_AStartHUD_NoRegister()
	{
		return AStartHUD::StaticClass();
	}
	struct Z_Construct_UClass_AStartHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Hud/StartHUD.h" },
		{ "ModuleRelativePath", "Public/Hud/StartHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlayClass_MetaData[] = {
		{ "Category", "StartHUD" },
		{ "ModuleRelativePath", "Public/Hud/StartHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlayClass = { "StartOverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartHUD, StartOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStartOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlayClass_MetaData), Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/StartHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlay = { "StartOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartHUD, StartOverlay), Z_Construct_UClass_UStartOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlay_MetaData), Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartHUD_Statics::NewProp_StartOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStartHUD_Statics::ClassParams = {
		&AStartHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStartHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStartHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStartHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AStartHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStartHUD()
	{
		if (!Z_Registration_Info_UClass_AStartHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStartHUD.OuterSingleton, Z_Construct_UClass_AStartHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStartHUD.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<AStartHUD>()
	{
		return AStartHUD::StaticClass();
	}
	AStartHUD::AStartHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartHUD);
	AStartHUD::~AStartHUD() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStartHUD, AStartHUD::StaticClass, TEXT("AStartHUD"), &Z_Registration_Info_UClass_AStartHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStartHUD), 2610413634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartHUD_h_2419937882(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
