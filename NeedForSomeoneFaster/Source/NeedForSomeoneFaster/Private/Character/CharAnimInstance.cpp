// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharAnimInstance.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UCharAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (PlayerCharacter)
	{
		PlayerMovement = PlayerCharacter->GetCharacterMovement();
	}
}

void UCharAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	if (PlayerMovement)
	{ 
		GroundSpeed = UKismetMathLibrary::VSizeXY(PlayerMovement->Velocity);
	}

}
