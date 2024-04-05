// Fill out your copyright notice in the Description page of Project Settings.


#include "Hud/PlayerOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPlayerOverlay::SetHealthBarPercent(float Percent)
{
    if (HealthBar)
        HealthBar->SetPercent(Percent);
}

void UPlayerOverlay::SetSpeedStaminaBarPercent(float Percent)
{
    if (SpeedStaminaBar)
        SpeedStaminaBar->SetPercent(Percent);
}

void UPlayerOverlay::SetSlowStaminaBarPercent(float Percent)
{
    if (SlowStaminaBar)
        SlowStaminaBar->SetPercent(Percent);
}

void UPlayerOverlay::SetSuperAttackPercent(float Percent)
{
    if (SuperAttackBar)
        SuperAttackBar->SetPercent(Percent);
}

void UPlayerOverlay::WriteText(FText Text, bool bBossText)
{
    if (bBossText)
    {
        if (BossText)
            BossText->SetText(Text);
    }
    else
    {
        if (NpcText)
            NpcText->SetText(Text);
    }
}
