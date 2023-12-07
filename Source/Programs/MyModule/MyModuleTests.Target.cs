using UnrealBuildTool;

[SupportedPlatforms(UnrealPlatformClass.All)]
public class MyModuleTestsTarget: TestTargetRules
{
    public MyModuleTestsTarget(TargetInfo Target): base(Target)
    {
        bCompileAgainstCoreUObject = true;
        bCompileAgainstApplicationCore = true;
    }
}