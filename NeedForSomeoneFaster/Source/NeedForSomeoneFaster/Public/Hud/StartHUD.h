// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StartHUD.generated.h"

class UStartOverlay;

UCLASS()
class NEEDFORSOMEONEFASTER_API AStartHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStartOverlay> StartOverlayClass;
	UPROPERTY()
	UStartOverlay* StartOverlay;
};
