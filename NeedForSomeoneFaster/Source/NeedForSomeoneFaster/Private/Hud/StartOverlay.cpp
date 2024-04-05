// Fill out your copyright notice in the Description page of Project Settings.


#include "Hud/StartOverlay.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UStartOverlay::NativeConstruct()
{
	Super::NativeConstruct();
	StartButton->OnClicked.AddDynamic(this, &UStartOverlay::Start);
	QuitButton->OnClicked.AddDynamic(this, &UStartOverlay::Quit);
}

void UStartOverlay::Start()
{
	UGameplayStatics::OpenLevel(this, FName("MainLevel"));
}

void UStartOverlay::Quit()
{
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		UKismetSystemLibrary::QuitGame(this, Controller, EQuitPreference::Quit, true);
	}
}
