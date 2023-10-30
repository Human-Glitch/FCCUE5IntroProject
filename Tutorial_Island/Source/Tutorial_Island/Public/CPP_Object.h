// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_Object.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TUTORIAL_ISLAND_API UCPP_Object : public UObject
{
	GENERATED_BODY()
private:
	int ourPrivateIntegerVariable;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ourPublicIntegerVariable;

	UFUNCTION(BlueprintPure)
		int GetOurPrivateInteger();

	UFUNCTION(BlueprintCallable)
		void SetOurPrivateInteger(UPARAM(ref)int& newValue);
};
