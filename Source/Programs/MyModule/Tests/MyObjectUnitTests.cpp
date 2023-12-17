#include "CoreMinimal.h"
#include "TestHarness.h"

#include "MyObject.h"

// Disable until UObjects are available in unit tests
namespace LowLevelTestSample {
	DISABLED_TEST_CASE("LowLevelTestSample::MyModule::UObject", "[unit]")
	{
		SECTION("Sample")
		{
			auto* MyObject = NewObject<UMyObject>();
			CHECK(MyObject != nullptr);
		}
	}
}