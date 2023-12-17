#if WITH_LOW_LEVEL_TESTS
#include "CoreMinimal.h"
#include "TestHarness.h"

#include "MyObject.h"

namespace LowLevelTestSample {
    DISABLED_TEST_CASE_(FImplicitTest, "LowLevelTestSample::ImplicitTest", "[unit]")
    {
        SECTION("Sample")
        {
            // This fails unless UObjects are initialized.
            // UPackage* TestPackage = NewObject<UPackage>(nullptr, TEXT("Test/TestPackageName"), RF_Transient);
        }
    }
}

#endif // WITH_LOW_LEVEL_TESTS