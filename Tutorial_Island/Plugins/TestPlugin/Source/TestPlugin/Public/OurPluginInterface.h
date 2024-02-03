// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OurPluginInterface.generated.h"

UINTERFACE(MinimalAPI)
class UOurPluginInterface : public UInterface
{
	GENERATED_BODY()
};

class TESTPLUGIN_API IOurPluginInterface
{
	GENERATED_BODY()

public:
	void TestFunction();
};
