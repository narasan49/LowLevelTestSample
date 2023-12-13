#include "CoreMinimal.h"
#include "TestHarness.h"

#include "MyObject.h"

namespace LowLevelTestSample {
	TEST_CASE_NAMED(FNamedTest, "LowLevelTestSample::NamedTest", "[unit]")
	{
		SECTION("Sample")
		{
			auto* MyObject = NewObject<UMyObject>();
			CHECK(MyObject != nullptr);
		}
	}
}