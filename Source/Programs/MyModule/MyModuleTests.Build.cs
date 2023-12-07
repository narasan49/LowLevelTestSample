using UnrealBuildTool;

public class MyModuleTests : TestModuleRules
{
    public MyModuleTests(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "MyModule",
        });

        PublicIncludePathModuleNames.AddRange(new string[]
        {
            "MyModule",
        });

        UpdateBuildGraphPropertiesFile(new Metadata { TestName = "MyModule", TestShortName = "MyModule" });
    }

}
