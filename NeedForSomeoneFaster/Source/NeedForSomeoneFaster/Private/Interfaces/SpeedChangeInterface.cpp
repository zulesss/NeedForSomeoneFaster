// Fill out your copyright notice in the Description page of Project Settings.


#include "Interfaces/SpeedChangeInterface.h"

// Add default functionality here for any ISpeedChangeInterface functions that are not pure virtual.

void ISpeedChangeInterface::ChangeSpeedState(ESpeedState State)
{
}

void ISpeedChangeInterface::ActivateGame()
{
}

void ISpeedChangeInterface::WriteText(FText Text, bool BossText)
{
}

FVector ISpeedChangeInterface::GetSpawnPoint()
{
    return FVector();
}
