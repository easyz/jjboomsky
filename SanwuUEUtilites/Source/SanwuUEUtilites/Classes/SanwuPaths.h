#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SanwuPaths.generated.h"
using namespace UF;
UCLASS()
class USanwuPaths :public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Sanwu|Paths")
	static FString GetEngineDir();

	UFUNCTION(BlueprintPure, Category = "Sanwu|Paths")
	static FString GetGameSaveDir();
};