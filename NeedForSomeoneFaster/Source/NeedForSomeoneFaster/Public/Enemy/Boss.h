// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/Enemy.h"
#include "Interfaces/BossInterface.h"
#include "Boss.generated.h"

/**
 * 
 */
UCLASS()
class NEEDFORSOMEONEFASTER_API ABoss : public AEnemy, public IBossInterface
{
	GENERATED_BODY()
public:
	ABoss();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void CheckEnemies(AActor* Object) override;
protected:
	virtual float GetHit(float Damage) override;
private:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> Enemies;
	UPROPERTY(EditAnywhere)
	AActor* NPC;
	virtual void Attack() override;
	bool ShouldCheck = true;
	FTimerHandle CheckTimer;
	UPROPERTY(EditAnywhere)
	float XOffset;
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* LightningEffects;
};
