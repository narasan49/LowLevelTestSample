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

        // This might have no effect for project's module.
        // UpdateBuildGraphPropertiesFile(new Metadata { TestName = "MyModule", TestShortName = "MyModule", ReportType = "xml" });
    }

}
