// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterTypes.h"
#include "Interfaces/HitInterface.h"
#include "Interfaces/SpeedChangeInterface.h"
#include "BaseCharacter.generated.h"

class USphereComponent;
class UAnimMontage;
class UAttributiveComponent;

UCLASS()
class NEEDFORSOMEONEFASTER_API ABaseCharacter : public ACharacter, public IHitInterface, public ISpeedChangeInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void BeginPlay() override;
	virtual void Attack();
	virtual void SuperAttack();
	virtual void ChangeSpeedState(ESpeedState State) override;
	virtual void ActivateGame() override;

	UFUNCTION()
	virtual void SphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	virtual float GetHit(float Damage) override;
	UFUNCTION(BlueprintCallable)
	virtual void EnableCollision();
	UFUNCTION(BlueprintCallable)
	virtual void DisableCollision();


	UPROPERTY(EditAnywhere)
	UAnimMontage* AttackMontage;
	UPROPERTY(EditAnywhere)
	TArray<FName> AttackMontages;
	UPROPERTY(EditAnywhere)
	UAnimMontage* SuperAttackMontage;
	UPROPERTY(EditAnywhere)
	UAnimMontage* HitReactMontage;
	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathMontage;
	ESpeedState SpeedState = ESpeedState::ESS_Default;
	UPROPERTY(BlueprintReadOnly)
	ECharacterState CharacterState = ECharacterState::ECS_Unoccupied;
	TArray<AActor*> ActorsToIgnore;
	UPROPERTY(VisibleAnywhere)
	UAttributiveComponent* Attributes;
	UPROPERTY(EditAnywhere)
	float HitDamage;
private:
	
	UFUNCTION(BlueprintCallable)
	void AttackEnd();
	UPROPERTY(VisibleAnywhere)
	USphereComponent* HandSphere1;
	UPROPERTY(VisibleAnywhere)
	USphereComponent* HandSphere2;

};
