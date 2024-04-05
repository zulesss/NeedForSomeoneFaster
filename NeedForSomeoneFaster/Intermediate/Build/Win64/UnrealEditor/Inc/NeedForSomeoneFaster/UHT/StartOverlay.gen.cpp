// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Hud/StartOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartOverlay() {}
// Cross Module References
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UStartOverlay();
	NEEDFORSOMEONEFASTER_API UClass* Z_Construct_UClass_UStartOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	DEFINE_FUNCTION(UStartOverlay::execQuit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Quit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartOverlay::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UStartOverlay::StaticRegisterNativesUStartOverlay()
	{
		UClass* Class = UStartOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Quit", &UStartOverlay::execQuit },
			{ "Start", &UStartOverlay::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartOverlay_Quit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartOverlay_Quit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hud/StartOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartOverlay_Quit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartOverlay, nullptr, "Quit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStartOverlay_Quit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStartOverlay_Quit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UStartOverlay_Quit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartOverlay_Quit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartOverlay_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartOverlay_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hud/StartOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartOverlay_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartOverlay, nullptr, "Start", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStartOverlay_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStartOverlay_Start_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UStartOverlay_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartOverlay_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStartOverlay);
	UClass* Z_Construct_UClass_UStartOverlay_NoRegister()
	{
		return UStartOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UStartOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartOverlay_Quit, "Quit" }, // 1046285422
		{ &Z_Construct_UFunction_UStartOverlay_Start, "Start" }, // 3014311237
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hud/StartOverlay.h" },
		{ "ModuleRelativePath", "Public/Hud/StartOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartOverlay_Statics::NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/StartOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartOverlay_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartOverlay, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::NewProp_StartButton_MetaData), Z_Construct_UClass_UStartOverlay_Statics::NewProp_StartButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartOverlay_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hud/StartOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartOverlay_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartOverlay, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::NewProp_QuitButton_MetaData), Z_Construct_UClass_UStartOverlay_Statics::NewProp_QuitButton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartOverlay_Statics::NewProp_StartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartOverlay_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStartOverlay_Statics::ClassParams = {
		&UStartOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStartOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UStartOverlay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartOverlay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStartOverlay()
	{
		if (!Z_Registration_Info_UClass_UStartOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStartOverlay.OuterSingleton, Z_Construct_UClass_UStartOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStartOverlay.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UClass* StaticClass<UStartOverlay>()
	{
		return UStartOverlay::StaticClass();
	}
	UStartOverlay::UStartOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartOverlay);
	UStartOverlay::~UStartOverlay() {}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStartOverlay, UStartOverlay::StaticClass, TEXT("UStartOverlay"), &Z_Registration_Info_UClass_UStartOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStartOverlay), 2444490811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartOverlay_h_4218490081(TEXT("/Script/NeedForSomeoneFaster"),
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Hud_StartOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
