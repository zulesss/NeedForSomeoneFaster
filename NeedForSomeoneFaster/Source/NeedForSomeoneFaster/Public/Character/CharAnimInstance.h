// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharAnimInstance.generated.h"

class APlayerCharacter;
class UCharacterMovementComponent;

UCLASS()
class NEEDFORSOMEONEFASTER_API UCharAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	APlayerCharacter* PlayerCharacter;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	UCharacterMovementComponent* PlayerMovement;

	UPROPERTY(VisibleAnywhere)
	float GroundSpeed;
};
