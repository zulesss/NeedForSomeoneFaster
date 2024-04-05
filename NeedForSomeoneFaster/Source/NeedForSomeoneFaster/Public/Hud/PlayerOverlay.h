// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerOverlay.generated.h"

class UProgressBar;
class UTextBlock;
/**
 * 
 */
UCLASS()
class NEEDFORSOMEONEFASTER_API UPlayerOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetHealthBarPercent(float Percent);
	void SetSpeedStaminaBarPercent(float Percent);
	void SetSlowStaminaBarPercent(float Percent);
	void SetSuperAttackPercent(float Percent);
	void WriteText(FText Text, bool bBossText);
protected:
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
	UProgressBar* SpeedStaminaBar;
	UPROPERTY(meta = (BindWidget))
	UProgressBar* SlowStaminaBar;
	UPROPERTY(meta = (BindWidget))
	UProgressBar* SuperAttackBar;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* NpcText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* BossText;
};
