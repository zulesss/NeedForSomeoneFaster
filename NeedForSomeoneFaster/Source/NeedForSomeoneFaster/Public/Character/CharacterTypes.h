#pragma once

UENUM(BlueprintType)
enum class ESpeedState : uint8
{
	ESS_Default UMETA(DisplayName = "Default"),
	ESS_Speed UMETA(DisplayName = "Speed"),
	ESS_Slow UMETA(DisplayName = "Slow")
};

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	ECS_Engaged UMETA(DisplayName = "Engaged"),
	ECS_Dead UMETA(DisplayName = "Dead")
};
