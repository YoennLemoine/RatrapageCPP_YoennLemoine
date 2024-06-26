// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_LemoineYoenn : ModuleRules
{
	public FPS_LemoineYoenn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","UMG", "EnhancedInput" });
	}
}
