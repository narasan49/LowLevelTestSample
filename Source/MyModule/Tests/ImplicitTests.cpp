#if WITH_TESTS
#include "Tests/TestHarnessAdapter.h"

#include "MyObject.h"

namespace LowLevelTestSample {
    TEST_CASE_NAMED(FImplicitTest, "LowLevelTestSample::ImplicitTest", "[unit]")
    {
        SECTION("Sample")
        {
            auto* MyObject = NewObject<UMyObject>();
            CHECK(MyObject != nullptr);
        }
    }
}

#endif // WITH_TESTS