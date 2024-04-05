// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/AttributiveComponent.h"
#include "Hud/PlayerOverlay.h"

// Sets default values for this component's properties
UAttributiveComponent::UAttributiveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttributiveComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

float UAttributiveComponent::GetHealthPercent()
{
	return Health/MaxHealth;
}

float UAttributiveComponent::GetSuperHitStaminaPercent()
{
	return SuperHitStamina/MaxSuperHitStamina;
}

float UAttributiveComponent::GetSlowStaminaPercent()
{
	return SlowStamina/MaxSlowStamina;
}

float UAttributiveComponent::GetSpeedStaminaPercent()
{
	return SpeedStamina/MaxSpeedStamina;
}

void UAttributiveComponent::ChangeHealth(float ChangeAmount)
{
	Health -= ChangeAmount;
}

void UAttributiveComponent::ChangeSuperHitStamina(float ChangeAmount)
{
	SuperHitStamina -= ChangeAmount;
}

void UAttributiveComponent::ChangeSlowStamina(float ChangeAmount)
{
	SlowStamina -= ChangeAmount;
}

void UAttributiveComponent::ChangeSpeedStamina(float ChangeAmount)
{
	SpeedStamina -= ChangeAmount;
}


// Called every frame
void UAttributiveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAttributiveComponent::RegenAttributes(float DeltaTime)
{
	SlowStamina = FMath::Clamp(SlowStamina + (DeltaTime * SlowStaminaRegenRate / 2.f), 0.f, MaxSlowStamina);
	SpeedStamina = FMath::Clamp(SpeedStamina + (DeltaTime * SpeedStaminaRegenRate / 2.f), 0.f, MaxSpeedStamina);
	SuperHitStamina = FMath::Clamp(SuperHitStamina + (DeltaTime * SuperHitStaminaRegenRate / 2.f), 0.f, MaxSuperHitStamina);
	Health = FMath::Clamp(Health + (DeltaTime * HealthRegenRate / 2.f), 0.f, MaxHealth);
}

