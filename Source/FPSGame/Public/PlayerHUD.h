// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUD.generated.h"

//class UTextBlock;

/**
 * 
 */
UCLASS()
class FPSGAME_API UPlayerHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	class UTextBlock* Message = nullptr;
};
