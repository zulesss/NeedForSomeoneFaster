// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Character/CharacterTypes.h"
#include "SpeedChangeInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USpeedChangeInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class NEEDFORSOMEONEFASTER_API ISpeedChangeInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ChangeSpeedState(ESpeedState State);
	virtual void ActivateGame();
	virtual void WriteText(FText Text, bool BossText);
	virtual FVector GetSpawnPoint();
};
