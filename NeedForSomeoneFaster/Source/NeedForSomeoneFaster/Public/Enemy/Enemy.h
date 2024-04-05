// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character/BaseCharacter.h"
#include "Enemy.generated.h"

class AAIController;
class UPawnSensingComponent;

UCLASS()
class NEEDFORSOMEONEFASTER_API AEnemy : public ABaseCharacter
{
	GENERATED_BODY()

public:
	AEnemy();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void BeginPlay() override;
	virtual float GetHit(float Damage) override;
	void UpdateHealthBar();
	virtual void Attack() override;
	void PlayAttackMontage();
	virtual void SphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void EnableCollision() override;
	virtual void DisableCollision() override;
	virtual void ChangeSpeedState(ESpeedState State) override;

	UPROPERTY(EditAnywhere)
	float SlowSpeed;
	UPROPERTY(EditAnywhere)
	float DefaultSpeed;
	UPROPERTY(EditAnywhere)
	float AcceptanceRadius = 10.f;
	UPROPERTY(EditAnywhere)
	float CombatRadius = 120.f;
private:
	AAIController* EnemyController;
	UPROPERTY(VisibleAnywhere)
	UPawnSensingComponent* PawnSensing;
	UFUNCTION()
	void PawnSeen(APawn* SeenPawn);
	void AddToPlayerArray(APawn* SeenPawn);
	void MoveToPlayer();
	APawn* ChaseTarget;
	APawn* CombatTarget;
	double Distance = 121.f;
	FTimerHandle AttackTimer;
	bool bDoCastLogic = true;
	UPROPERTY(EditAnywhere)
	AActor* Boss;
	UPROPERTY(VisibleAnywhere)
	class UHealthBarComponent* HealthBar;

};
