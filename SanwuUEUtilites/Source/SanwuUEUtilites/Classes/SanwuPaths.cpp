#include "SanwuUEUtilitesPrivatePCH.h"
#include "SanwuPaths.h"

FString USanwuPaths::GetEngineDir()
{
	return FPaths::EngineDir();
	
}
FString USanwuPaths::GetGameSaveDir()
{
	return FPaths::GameSavedDir();
}