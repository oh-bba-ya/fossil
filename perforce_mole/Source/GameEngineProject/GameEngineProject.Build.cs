// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameEngineProject : ModuleRules
{
	public GameEngineProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		PublicDependencyModuleNames.AddRange(new string[] { "UMG", "Slate", "SlateCore", "AIModule", "GameplayTasks" });
	}
}
