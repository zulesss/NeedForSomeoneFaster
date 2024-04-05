// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Enemy.h"
#include "Character/PlayerCharacter.h"
#include "AIController.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/AttributiveComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/BossInterface.h"
#include "Hud/HealthBarComponent.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SightRadius = 32000.f;
	PawnSensing->SetPeripheralVisionAngle(180.f);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	HealthBar = CreateDefaultSubobject<UHealthBarComponent>(TEXT("HealthBar"));
	HealthBar->SetupAttachment(GetRootComponent());
	HealthBar->SetVisibility(false);
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (PawnSensing)
		PawnSensing->OnSeePawn.AddDynamic(this, &AEnemy::PawnSeen);
	if (HealthBar && Attributes)
		HealthBar->SetHealthBarPercent(1.f);
	Tags.Add(FName("Enemy"));
	
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveToPlayer();
	if (Distance < CombatRadius && CharacterState == ECharacterState::ECS_Unoccupied)
		Attack();
	else if (Distance > 1000.f)
		HealthBar->SetVisibility(false);
}

float AEnemy::GetHit(float Damage)
{
	Super::GetHit(Damage);
	UpdateHealthBar();
	if (Attributes->GetHealth() <= 0.f)
	{
		IBossInterface* BossInterface = Cast<IBossInterface>(Boss);
		if (BossInterface)
			BossInterface->CheckEnemies(this);
		HealthBar->SetVisibility(false);
	}
	else
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance)
		{
			if(SpeedState == ESpeedState::ESS_Slow)
				AnimInstance->Montage_Play(HitReactMontage, 0.5f);
			else
				AnimInstance->Montage_Play(HitReactMontage);
		}
		CharacterState = ECharacterState::ECS_Engaged;
	}
	//GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemy::MoveToPlayer, 2.f);
	return 0.0f;
}

void AEnemy::UpdateHealthBar()
{
	if (HealthBar && Attributes)
	{
		HealthBar->SetVisibility(true);
		HealthBar->SetHealthBarPercent(Attributes->GetHealthPercent());
	}
}

void AEnemy::Attack()
{
	CharacterState = ECharacterState::ECS_Engaged;
	CombatTarget = ChaseTarget;
	PlayAttackMontage();
}

void AEnemy::PlayAttackMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		if (SpeedState == ESpeedState::ESS_Slow)
			AnimInstance->Montage_Play(AttackMontage, 0.75f);
		else
			AnimInstance->Montage_Play(AttackMontage, 1.5f);
		AnimInstance->Montage_JumpToSection(AttackMontages[FMath::RandRange(0, AttackMontages.Num() - 1)]);
		//GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemy::MoveToPlayer, 2.f);
	}
}

void AEnemy::SphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AEnemy* HitActor = Cast<AEnemy>(OtherActor);
	if(!HitActor)
		Super::SphereBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AEnemy::EnableCollision()
{
	Super::EnableCollision();
	
}

void AEnemy::DisableCollision()
{
	Super::DisableCollision();
	GetCharacterMovement()->DisableMovement();
}

void AEnemy::ChangeSpeedState(ESpeedState State)
{
	Super::ChangeSpeedState(State);
	if(SpeedState == ESpeedState::ESS_Slow)
		GetCharacterMovement()->MaxWalkSpeed = SlowSpeed;
	else
		GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
}

void AEnemy::PawnSeen(APawn* SeenPawn)
{
	AddToPlayerArray(SeenPawn);
	ChaseTarget = SeenPawn;
	MoveToPlayer();
	Distance = FVector::Dist(GetActorLocation(), ChaseTarget->GetActorLocation());
	
	//GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemy::MoveToPlayer, 1.f);
}

void AEnemy::AddToPlayerArray(APawn* SeenPawn)
{
	if (bDoCastLogic)
	{
		APlayerCharacter* Player = Cast<APlayerCharacter>(SeenPawn);
		Player->AddToEnemyArray(this);
		bDoCastLogic = false;
	}
}

void AEnemy::MoveToPlayer()
{
	EnemyController = Cast<AAIController>(GetController());
	FAIMoveRequest MoveRequest;
	MoveRequest.SetAcceptanceRadius(AcceptanceRadius);
	if (ChaseTarget)
	{
		MoveRequest.SetGoalActor(ChaseTarget);
		if (EnemyController && CharacterState == ECharacterState::ECS_Unoccupied)
			EnemyController->MoveTo(MoveRequest);
	}
		
	else if (CombatTarget)
	{
		MoveRequest.SetGoalActor(CombatTarget);
		if (EnemyController && CharacterState == ECharacterState::ECS_Unoccupied)
			EnemyController->MoveTo(MoveRequest);
	}
		
	
}


void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



