// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributiveComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEEDFORSOMEONEFASTER_API UAttributiveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributiveComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RegenAttributes(float DeltaTime);
	float GetHealthPercent();
	float GetSuperHitStaminaPercent();
	float GetSlowStaminaPercent();
	float GetSpeedStaminaPercent();
	void ChangeHealth(float ChangeAmount);
	void ChangeSuperHitStamina(float ChangeAmount);
	void ChangeSlowStamina(float ChangeAmount);
	void ChangeSpeedStamina(float ChangeAmount);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
private:	
	UPROPERTY(EditAnywhere)
	float Health;
	UPROPERTY(EditAnywhere)
	float SuperHitStamina;
	UPROPERTY(EditAnywhere)
	float SlowStamina;
	UPROPERTY(EditAnywhere)
	float SpeedStamina;
	UPROPERTY(EditAnywhere)
	float MaxHealth;
	UPROPERTY(EditAnywhere)
	float MaxSuperHitStamina;
	UPROPERTY(EditAnywhere)
	float MaxSlowStamina;
	UPROPERTY(EditAnywhere)
	float MaxSpeedStamina;
	UPROPERTY(EditAnywhere)
	float HealthRegenRate;
	UPROPERTY(EditAnywhere)
	float SuperHitStaminaRegenRate;
	UPROPERTY(EditAnywhere)
	float SlowStaminaRegenRate;
	UPROPERTY(EditAnywhere)
	float SpeedStaminaRegenRate;


public:
	FORCEINLINE float GetHealth() { return Health; };
	FORCEINLINE float GetSuperHitStamina() { return SuperHitStamina; };
	FORCEINLINE float GetSlowStamina() { return SlowStamina; };
	FORCEINLINE float GetSpeedStamina() { return SpeedStamina; };
};
