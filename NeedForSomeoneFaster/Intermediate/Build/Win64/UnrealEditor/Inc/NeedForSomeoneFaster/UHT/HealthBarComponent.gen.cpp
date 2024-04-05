// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Hud/HealthBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarComponent() {}
// Cross Module References
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UHealthBarComponent();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void UHealthBarComponent::StaticRegisterNativesUHealthBarComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBarComponent);
	UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister()
	{
		return UHealthBarComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthBarComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthBarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Hud/HealthBarComponent.h" },
		{ "ModuleRelativePath", "Public/Hud/HealthBarComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/HealthBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthBarComponent, HealthBarWidget), Z_Construct_UClass_UHealthBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget_MetaData), Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthBarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBarComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBarComponent_Statics::ClassParams = {
		&UHealthBarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthBarComponent()
	{
		if (!Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton, Z_Construct_UClass_UHealthBarComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<UHealthBarComponent>()
	{
		return UHealthBarComponent::StaticClass();
	}
	UHealthBarComponent::UHealthBarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBarComponent);
	UHealthBarComponent::~UHealthBarComponent() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_HealthBarComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_HealthBarComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBarComponent, UHealthBarComponent::StaticClass, TEXT("UHealthBarComponent"), &Z_Registration_Info_UClass_UHealthBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBarComponent), 3332348430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_HealthBarComponent_h_391369387(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_HealthBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_HealthBarComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
