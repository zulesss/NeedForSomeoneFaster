// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UPlayerOverlay;
class USphereComponent;


UCLASS()
class NEEDFORSOMEONEFASTER_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void AddToEnemyArray(AActor* Enemy);


protected:
	virtual void BeginPlay() override;
	virtual void Attack() override;
	virtual void SuperAttack() override;
	virtual void SphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void EnableCollision() override;
	virtual void DisableCollision() override;
	virtual void WriteText(FText Text, bool BossText) override;
	virtual FVector GetSpawnPoint() override;
	virtual float GetHit(float Damage) override;
	
private:
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;
	UPROPERTY(EditAnywhere)
	TArray<AActor*> Enemies;
	UPROPERTY()
	UPlayerOverlay* PlayerOverlay;
	UPROPERTY(VisibleAnywhere)
	USphereComponent* NPCSpawnPoint;
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* LightningEffects;
	FTimerHandle QuitTimer;

	void SetPlayerOverlay();
	void UpdateAttributes(float DeltaTime);
	void SpendSpeedStateStamina(float DeltaTime);
	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookUp(float Value);
	void LookRight(float Value);
	void ToggleDefault();
	void ToggleSpeed();
	void ToggleSlow();
	bool CanSuperAttack(UAnimInstance* AnimInstance);
	void ChangeEnemySpeedState(ESpeedState EnemySpeedState);
	UFUNCTION()
	void Quit();
};
