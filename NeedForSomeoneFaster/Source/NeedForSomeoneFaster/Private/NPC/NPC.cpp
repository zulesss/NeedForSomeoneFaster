// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/NPC.h"
#include "Interfaces/SpeedChangeInterface.h"
#include "Perception/PawnSensingComponent.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ANPC::ANPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SetPeripheralVisionAngle(180.f);
	PawnSensing->SightRadius = 3500.f;
}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
	if(PawnSensing)
		PawnSensing->OnSeePawn.AddDynamic(this, &ANPC::PawnSeen);
	
}

void ANPC::VictoryText()
{
	if (Player)
	{
		ISpeedChangeInterface* PlayerInterface = Cast<ISpeedChangeInterface>(Player);
		FVector NPCLocation;
		if (PlayerInterface)
			NPCLocation = PlayerInterface->GetSpawnPoint();
		FRotator NPCRotation = Player->GetActorRotation();
		NPCRotation.Yaw += 180.f;
		SetActorLocation(NPCLocation);
		SetActorRotation(NPCRotation);
	}
	WriteOverlayText(FString("You did it! Thanks for your help. The city will not forgot what did you do!"), false);
	GetWorldTimerManager().SetTimer(TextTimer, this, &ANPC::EndGame, 7.f);
}

void ANPC::EndGame()
{
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		UKismetSystemLibrary::QuitGame(this, PlayerController, EQuitPreference::Quit, true);
	}
}

void ANPC::StartText()
{
	WriteOverlayText(FString("Thanks God, you are here. We need help!"), false);
	GetWorldTimerManager().SetTimer(TextTimer, this, &ANPC::SecondText, 5.f);
}

void ANPC::WriteOverlayText(FString String, bool BossText)
{
	FText Text = FText::FromString(String);
	if (Player)
	{
		ISpeedChangeInterface* PlayerInterface = Cast<ISpeedChangeInterface>(Player);
		if (PlayerInterface)
			PlayerInterface->WriteText(Text, BossText);
	}
}

void ANPC::SecondText()
{
	WriteOverlayText(FString("This man has super speed and want to kill everyone in this city!"), false);
	GetWorldTimerManager().SetTimer(TextTimer, this, &ANPC::FirstBossText, 5.f);
}

void ANPC::FirstBossText()
{
	WriteOverlayText(FString(""), false);
	WriteOverlayText(FString("I`m too strong for you, try to defeat my assistants firstly!"), true);
	GetWorldTimerManager().SetTimer(TextTimer, this, &ANPC::ActivateEnemies, 5.f);
}

void ANPC::ActivateEnemies()
{
	for (auto Enemy : Enemies)
	{
		ISpeedChangeInterface* EnemyInterface = Cast<ISpeedChangeInterface>(Enemy);
		if (EnemyInterface)
			EnemyInterface->ActivateGame();

	}
	ISpeedChangeInterface* PlayerInterface = Cast<ISpeedChangeInterface>(Player);
	if (PlayerInterface)
		PlayerInterface->ActivateGame();
	WriteOverlayText(FString(""), true);
}

void ANPC::PawnSeen(APawn* SeenPawn)
{
	if (bStartText)
	{
		Player = SeenPawn;
		StartText();
		bStartText = false;
	}
}



// Called every frame
void ANPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

