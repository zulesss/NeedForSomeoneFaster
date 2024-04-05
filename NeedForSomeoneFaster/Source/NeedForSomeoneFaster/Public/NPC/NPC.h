#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/NPCInterface.h"
#include "NPC.generated.h"

class UPlayerOverlay;
class UPawnSensingComponent;

UCLASS()
class NEEDFORSOMEONEFASTER_API ANPC : public ACharacter, public INPCInterface
{
	GENERATED_BODY()

public:
	ANPC();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void BeginPlay() override;
	virtual void VictoryText() override;
private:	
	UPROPERTY(VisibleAnywhere)
	UPawnSensingComponent* PawnSensing;
	UPROPERTY(EditInstanceOnly)
	TArray<AActor*> Enemies;
	void StartText();
	void WriteOverlayText(FString String, bool BossText);
	void SecondText();
	void FirstBossText();
	FTimerHandle TextTimer;
	void ActivateEnemies();
	UFUNCTION()
	void PawnSeen(APawn* SeenPawn);
	AActor* Player;
	bool bStartText = true;
	void EndGame();
};
