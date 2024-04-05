// Fill out your copyright notice in the Description page of Project Settings.


#include "Hud/HealthBarComponent.h"
#include "Hud/HealthBarWidget.h"
#include "Components/ProgressBar.h"

void UHealthBarComponent::SetHealthBarPercent(float Percent)
{
	if (HealthBarWidget == nullptr)
		HealthBarWidget = Cast<UHealthBarWidget>(GetUserWidgetObject());
	if (HealthBarWidget && HealthBarWidget->HealthBar)
	{
		HealthBarWidget->HealthBar->SetPercent(Percent);
	}
}
