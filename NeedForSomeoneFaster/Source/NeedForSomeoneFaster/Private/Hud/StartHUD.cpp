// Fill out your copyright notice in the Description page of Project Settings.


#include "Hud/StartHUD.h"

void AStartHUD::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && StartOverlayClass)
		{
			StartOverlay = CreateWidget<UStartOverlay>(Controller, StartOverlayClass);
			StartOverlay->AddToViewport();
		}
	}
}
