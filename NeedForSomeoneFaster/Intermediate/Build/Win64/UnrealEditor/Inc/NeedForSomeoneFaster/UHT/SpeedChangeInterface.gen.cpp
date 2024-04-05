// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Interfaces/SpeedChangeInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedChangeInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_USpeedChangeInterface();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_USpeedChangeInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void USpeedChangeInterface::StaticRegisterNativesUSpeedChangeInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeedChangeInterface);
	UClass* Z_Construct_UClass_USpeedChangeInterface_NoRegister()
	{
		return USpeedChangeInterface::StaticClass();
	}
	struct Z_Construct_UClass_USpeedChangeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeedChangeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeedChangeInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedChangeInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/SpeedChangeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeedChangeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISpeedChangeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeedChangeInterface_Statics::ClassParams = {
		&USpeedChangeInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeedChangeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeedChangeInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpeedChangeInterface()
	{
		if (!Z_Registration_Info_UClass_USpeedChangeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeedChangeInterface.OuterSingleton, Z_Construct_UClass_USpeedChangeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpeedChangeInterface.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<USpeedChangeInterface>()
	{
		return USpeedChangeInterface::StaticClass();
	}
	USpeedChangeInterface::USpeedChangeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedChangeInterface);
	USpeedChangeInterface::~USpeedChangeInterface() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_SpeedChangeInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_SpeedChangeInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpeedChangeInterface, USpeedChangeInterface::StaticClass, TEXT("USpeedChangeInterface"), &Z_Registration_Info_UClass_USpeedChangeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeedChangeInterface), 1049677758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_SpeedChangeInterface_h_384213195(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_SpeedChangeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_SpeedChangeInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
