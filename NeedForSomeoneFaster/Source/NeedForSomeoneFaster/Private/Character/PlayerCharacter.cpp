// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/SpeedChangeInterface.h"
#include "Components/AttributiveComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Hud/PlayerOverlay.h"
#include "Hud/PlayerHUD.h"
#include "Kismet/KismetSystemLibrary.h"


APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);

	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 300.f;

	ViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ViewCamera"));
	ViewCamera->SetupAttachment(CameraBoom);

	NPCSpawnPoint = CreateDefaultSubobject<USphereComponent>(TEXT("NPCSpawnPoint"));
	NPCSpawnPoint->SetupAttachment(GetRootComponent());

	LightningEffects = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LightningEffect"));
	LightningEffects->SetupAttachment(GetRootComponent());
	LightningEffects->SetVisibility(false);

	GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerOverlay();
}

void APlayerCharacter::SetPlayerOverlay()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		APlayerHUD* PlayerHUD = Cast<APlayerHUD>(PlayerController->GetHUD());
		if (PlayerHUD)
		{
			PlayerOverlay = Cast<UPlayerOverlay>(PlayerHUD->GetOverlay());
		}
	}
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SpendSpeedStateStamina(DeltaTime);
	UpdateAttributes(DeltaTime);
}

void APlayerCharacter::UpdateAttributes(float DeltaTime)
{
	if (Attributes && PlayerOverlay)
	{
		Attributes->RegenAttributes(DeltaTime);
		PlayerOverlay->SetHealthBarPercent(Attributes->GetHealthPercent());
		PlayerOverlay->SetSpeedStaminaBarPercent(Attributes->GetSpeedStaminaPercent());
		PlayerOverlay->SetSlowStaminaBarPercent(Attributes->GetSlowStaminaPercent());
		PlayerOverlay->SetSuperAttackPercent(Attributes->GetSuperHitStaminaPercent());
	}
}

void APlayerCharacter::SpendSpeedStateStamina(float DeltaTime)
{
	if (SpeedState == ESpeedState::ESS_Speed)
	{
		Attributes->ChangeSpeedStamina(DeltaTime * 1.f);
		if (Attributes->GetSpeedStamina() <= 0)
			ToggleDefault();
	}
	if (SpeedState == ESpeedState::ESS_Slow)
	{
		Attributes->ChangeSlowStamina(DeltaTime * 1.f);
		if (Attributes->GetSlowStamina() <= 0)
			ToggleDefault();
	}
}

void APlayerCharacter::MoveForward(float Value)
{
	if(Controller && Value != 0.f && CharacterState == ECharacterState::ECS_Unoccupied)
	{
		const FRotator ControlRotation = GetControlRotation();
		const FRotator YawRotation(0.f, ControlRotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	if (Controller && Value != 0.f && CharacterState == ECharacterState::ECS_Unoccupied)
	{
		const FRotator ControlRotation = GetControlRotation();
		const FRotator YawRotation(0.f, ControlRotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void APlayerCharacter::LookRight(float Value)
{
	AddControllerYawInput(Value);
}

void APlayerCharacter::ToggleDefault()
{
	LightningEffects->SetVisibility(false);
	SpeedState = ESpeedState::ESS_Default;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	ChangeEnemySpeedState(SpeedState);
}

void APlayerCharacter::ToggleSpeed()
{
	LightningEffects->SetVisibility(true);
	if (Attributes->GetSpeedStamina() > 0)
	{
		SpeedState = ESpeedState::ESS_Speed;
		GetCharacterMovement()->MaxWalkSpeed = 4000.f;
		ChangeEnemySpeedState(SpeedState);
	}
	
}

void APlayerCharacter::ToggleSlow()
{
	LightningEffects->SetVisibility(false);
	if (Attributes->GetSlowStamina() > 0)
	{
		SpeedState = ESpeedState::ESS_Slow;
		GetCharacterMovement()->MaxWalkSpeed = 600.f;
		ChangeEnemySpeedState(SpeedState);
	}
}

void APlayerCharacter::Attack()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && CharacterState == ECharacterState::ECS_Unoccupied)
	{
		if (SpeedState == ESpeedState::ESS_Speed)
			AttackMontage->RateScale = 2.f;
		else
			AttackMontage->RateScale = 1.f;
		
		AnimInstance->Montage_Play(AttackMontage);
		AnimInstance->Montage_JumpToSection(AttackMontages[FMath::RandRange(0, 1)]);
		CharacterState = ECharacterState::ECS_Engaged;
	}
}

void APlayerCharacter::SuperAttack()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (CanSuperAttack(AnimInstance))
	{
		if (SpeedState == ESpeedState::ESS_Speed)
			AnimInstance->Montage_Play(SuperAttackMontage, 2.f);
		else
			AnimInstance->Montage_Play(SuperAttackMontage);
		CharacterState = ECharacterState::ECS_Engaged;
		if (Attributes)
			Attributes->ChangeSuperHitStamina(70.f);
	}	
}
	
bool APlayerCharacter::CanSuperAttack(UAnimInstance* AnimInstance)
{
	return Attributes->GetSuperHitStamina() >= 70.f && AnimInstance && CharacterState == ECharacterState::ECS_Unoccupied;
}

void APlayerCharacter::ChangeEnemySpeedState(ESpeedState EnemySpeedState)
{
	for (AActor* Enemy : Enemies)
	{
		if (Enemy)
		{
			ISpeedChangeInterface* SpeedInterface = Cast<ISpeedChangeInterface>(Enemy);
			SpeedInterface->ChangeSpeedState(EnemySpeedState);
		}
	}
}

void APlayerCharacter::Quit()
{
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		UKismetSystemLibrary::QuitGame(this, PlayerController, EQuitPreference::Quit, true);
	}
}

void APlayerCharacter::SphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::SphereBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
}

void APlayerCharacter::EnableCollision()
{
	Super::EnableCollision();
}

void APlayerCharacter::DisableCollision()
{
	Super::DisableCollision();
}

void APlayerCharacter::WriteText(FText Text, bool BossText)
{
	if (PlayerOverlay)
		PlayerOverlay->WriteText(Text, BossText);
}

FVector APlayerCharacter::GetSpawnPoint()
{
	return NPCSpawnPoint->GetComponentLocation();
}

float APlayerCharacter::GetHit(float Damage)
{
	Super::GetHit(Damage);
	if (Attributes->GetHealth() <= 0.f)
		GetWorldTimerManager().SetTimer(QuitTimer, this, &APlayerCharacter::Quit, 2.9f);
	else
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance)
			AnimInstance->Montage_Play(HitReactMontage);
		CharacterState = ECharacterState::ECS_Engaged;
	}
	return 0.0f;
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(FName("LookUp"), this, &APlayerCharacter::LookUp);
	PlayerInputComponent->BindAxis(FName("LookRight"), this, &APlayerCharacter::LookRight);
	PlayerInputComponent->BindAction(FName("ToggleDefault"), IE_Pressed, this, &APlayerCharacter::ToggleDefault);
	PlayerInputComponent->BindAction(FName("ToggleSpeed"), IE_Pressed, this, &APlayerCharacter::ToggleSpeed);
	PlayerInputComponent->BindAction(FName("ToggleSlow"), IE_Pressed, this, &APlayerCharacter::ToggleSlow);
	PlayerInputComponent->BindAction(FName("Attack"), IE_Pressed, this, &APlayerCharacter::Attack);
	PlayerInputComponent->BindAction(FName("SuperAttack"), IE_Pressed, this, &APlayerCharacter::SuperAttack);
}

void APlayerCharacter::AddToEnemyArray(AActor* Enemy)
{
	Enemies.AddUnique(Enemy);
}

