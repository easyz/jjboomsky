#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SanwuFileManager.generated.h"
using namespace UF;
UCLASS()
class USanwuFileManager :public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Sanwu|FileManager")
	static bool Move(FString To, FString From);
};