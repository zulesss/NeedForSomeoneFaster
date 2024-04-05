// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Boss.h"
#include "Components/AttributiveComponent.h"
#include "Interfaces/NPCInterface.h"
#include "Components/PrimitiveComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

ABoss::ABoss()
{
	LightningEffects = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LightningEffect"));
	LightningEffects->SetupAttachment(GetRootComponent());
	LightningEffects->SetVisibility(true);
}

void ABoss::BeginPlay()
{
	Super::BeginPlay();
}

void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABoss::CheckEnemies(AActor* Object)
{
	//GetWorldTimerManager().SetTimer(CheckTimer, this, &ABoss::CheckEnemies, 10.f);
	Enemies.Remove(Object);
	for (AActor* Enemy : Enemies)
	{
		if (Enemy) return;
	}
	FVector Location = GetActorLocation();
	Location.X += XOffset;
	SetActorLocation(Location);
	CharacterState = ECharacterState::ECS_Unoccupied;
	ShouldCheck = false;
}

float ABoss::GetHit(float Damage)
{
	Super::GetHit(Damage);
	if (Attributes->GetHealth() <= 0.f)
	{
		INPCInterface* NPCInterface = Cast<INPCInterface>(NPC);
		if (NPCInterface)
			NPCInterface->VictoryText();
	}
	else 
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance)
			AnimInstance->Montage_Play(HitReactMontage);
		CharacterState = ECharacterState::ECS_Engaged;
	}
	return 0.0f;
}	



void ABoss::Attack()
{
	Super::Attack();
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		if (SpeedState == ESpeedState::ESS_Slow)
			AnimInstance->Montage_Play(AttackMontage, 0.9f);
		else
			AnimInstance->Montage_Play(AttackMontage, 2.f);
		AnimInstance->Montage_JumpToSection(AttackMontages[FMath::RandRange(0, AttackMontages.Num() - 1)]);

		//GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemy::MoveToPlayer, 2.f);
	}
}
