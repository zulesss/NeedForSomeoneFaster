// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Interfaces/NPCInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UNPCInterface();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UNPCInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	void UNPCInterface::StaticRegisterNativesUNPCInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCInterface);
	UClass* Z_Construct_UClass_UNPCInterface_NoRegister()
	{
		return UNPCInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNPCInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/NPCInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INPCInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCInterface_Statics::ClassParams = {
		&UNPCInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNPCInterface()
	{
		if (!Z_Registration_Info_UClass_UNPCInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCInterface.OuterSingleton, Z_Construct_UClass_UNPCInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCInterface.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<UNPCInterface>()
	{
		return UNPCInterface::StaticClass();
	}
	UNPCInterface::UNPCInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCInterface);
	UNPCInterface::~UNPCInterface() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_NPCInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_NPCInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCInterface, UNPCInterface::StaticClass, TEXT("UNPCInterface"), &Z_Registration_Info_UClass_UNPCInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCInterface), 3086834242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_NPCInterface_h_2357159299(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_NPCInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Interfaces_NPCInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
