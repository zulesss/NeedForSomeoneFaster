
#include "Character/BaseCharacter.h"
#include "Interfaces/HitInterface.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/AttributiveComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	HandSphere1 = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
	FName HandSocket1 = TEXT("RightHandSocket");
	HandSphere1->SetupAttachment(GetMesh(), HandSocket1);
	HandSphere1->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HandSphere1->SetSphereRadius(18.f);

	HandSphere2 = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere2"));
	FName HandSocket2 = TEXT("LeftHandSocket");
	HandSphere2->SetupAttachment(GetMesh(), HandSocket2);
	HandSphere2->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HandSphere2->SetSphereRadius(18.f);

	Attributes = CreateDefaultSubobject<UAttributiveComponent>(TEXT("Attributes"));
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	HandSphere1->OnComponentBeginOverlap.AddDynamic(this, &ABaseCharacter::SphereBeginOverlap);
	HandSphere2->OnComponentBeginOverlap.AddDynamic(this, &ABaseCharacter::SphereBeginOverlap);
	CharacterState = ECharacterState::ECS_Engaged;
}

void ABaseCharacter::Attack()
{
}

void ABaseCharacter::SuperAttack()
{
	Attributes->ChangeSuperHitStamina(70.f);
}

void ABaseCharacter::ChangeSpeedState(ESpeedState State)
{
	SpeedState = State;
}

void ABaseCharacter::ActivateGame()
{
	CharacterState = ECharacterState::ECS_Unoccupied;
}

void ABaseCharacter::AttackEnd()
{
	CharacterState = ECharacterState::ECS_Unoccupied;
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
}

void ABaseCharacter::SphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ActorsToIgnore.AddUnique(this);
	if (ActorHasTag(FName("Enemy")) && OtherActor->ActorHasTag(FName("Enemy"))) return;
	if (!ActorsToIgnore.Contains(OtherActor))
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);
		if (HitInterface)
			HitInterface->GetHit(HitDamage);
		ActorsToIgnore.AddUnique(OtherActor);
	}
}

void ABaseCharacter::EnableCollision()
{
	HandSphere1->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HandSphere2->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ABaseCharacter::DisableCollision()
{
	HandSphere1->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HandSphere2->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ActorsToIgnore.Empty();
}


float ABaseCharacter::GetHit(float Damage)
{
	Attributes->ChangeHealth(Damage);
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (Attributes->GetHealth() <= 0.f)
	{
		if (AnimInstance)
			AnimInstance->Montage_Play(DeathMontage);
		CharacterState = ECharacterState::ECS_Dead;
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		SetLifeSpan(3.f);
		return Damage;
	}
	
	return Damage;
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

