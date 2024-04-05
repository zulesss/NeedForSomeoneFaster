// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerHUD.generated.h"

class UPlayerOverlay;

UCLASS()
class NEEDFORSOMEONEFASTER_API APlayerHUD : public AHUD
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Overlay Class")
	TSubclassOf<UPlayerOverlay> PlayerOverlayClass;
	UPROPERTY()
	UPlayerOverlay* PlayerOverlay;
public:
	FORCEINLINE UPlayerOverlay* GetOverlay() const { return PlayerOverlay; };
};
