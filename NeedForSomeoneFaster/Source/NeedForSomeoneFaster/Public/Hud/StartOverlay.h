// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StartOverlay.generated.h"

class UButton;

UCLASS()
class NEEDFORSOMEONEFASTER_API UStartOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
protected:
	UPROPERTY(meta = (BindWidget))
	UButton* StartButton;
	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;
private:
	UFUNCTION()
	void Start();
	UFUNCTION()
	void Quit();
};
