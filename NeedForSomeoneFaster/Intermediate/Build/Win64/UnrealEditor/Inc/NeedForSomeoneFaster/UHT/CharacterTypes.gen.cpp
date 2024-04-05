// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedForSomeoneFaster/Public/Character/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}
// Cross Module References
	NEEDFORSOMEONEFASTER_API UEnum* Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState();
	NEEDFORSOMEONEFASTER_API UEnum* Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState();
	UPackage* Z_Construct_UPackage__Script_NeedForSomeoneFaster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedState;
	static UEnum* ESpeedState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpeedState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpeedState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState, (UObject*)Z_Construct_UPackage__Script_NeedForSomeoneFaster(), TEXT("ESpeedState"));
		}
		return Z_Registration_Info_UEnum_ESpeedState.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UEnum* StaticEnum<ESpeedState>()
	{
		return ESpeedState_StaticEnum();
	}
	struct Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::Enumerators[] = {
		{ "ESpeedState::ESS_Default", (int64)ESpeedState::ESS_Default },
		{ "ESpeedState::ESS_Speed", (int64)ESpeedState::ESS_Speed },
		{ "ESpeedState::ESS_Slow", (int64)ESpeedState::ESS_Slow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESS_Default.DisplayName", "Default" },
		{ "ESS_Default.Name", "ESpeedState::ESS_Default" },
		{ "ESS_Slow.DisplayName", "Slow" },
		{ "ESS_Slow.Name", "ESpeedState::ESS_Slow" },
		{ "ESS_Speed.DisplayName", "Speed" },
		{ "ESS_Speed.Name", "ESpeedState::ESS_Speed" },
		{ "ModuleRelativePath", "Public/Character/CharacterTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
		nullptr,
		"ESpeedState",
		"ESpeedState",
		Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState()
	{
		if (!Z_Registration_Info_UEnum_ESpeedState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedState.InnerSingleton, Z_Construct_UEnum_NeedForSomeoneFaster_ESpeedState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpeedState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState, (UObject*)Z_Construct_UPackage__Script_NeedForSomeoneFaster(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> NEEDFORSOMEONEFASTER_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::Enumerators[] = {
		{ "ECharacterState::ECS_Unoccupied", (int64)ECharacterState::ECS_Unoccupied },
		{ "ECharacterState::ECS_Engaged", (int64)ECharacterState::ECS_Engaged },
		{ "ECharacterState::ECS_Dead", (int64)ECharacterState::ECS_Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Dead.DisplayName", "Dead" },
		{ "ECS_Dead.Name", "ECharacterState::ECS_Dead" },
		{ "ECS_Engaged.DisplayName", "Engaged" },
		{ "ECS_Engaged.Name", "ECharacterState::ECS_Engaged" },
		{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
		{ "ECS_Unoccupied.Name", "ECharacterState::ECS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Character/CharacterTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeedForSomeoneFaster,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_NeedForSomeoneFaster_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharacterTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharacterTypes_h_Statics::EnumInfo[] = {
		{ ESpeedState_StaticEnum, TEXT("ESpeedState"), &Z_Registration_Info_UEnum_ESpeedState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1206389044U) },
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1378022002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharacterTypes_h_2138534152(TEXT("/Script/NeedForSomeoneFaster"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_NeedForSomeoneFaster_Source_NeedForSomeoneFaster_Public_Character_CharacterTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
