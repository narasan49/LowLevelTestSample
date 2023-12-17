#include "CoreMinimal.h"
#include "TestHarness.h"

#include "MySimpleClass.h"

namespace LowLevelTestSample {
    TEST_CASE("TestSample", "[unit]")
	{
		SECTION("Sample")
		{
            TSharedPtr<FMySimpleClass> MySimpleObject = MakeShared<FMySimpleClass>();
			CHECK(MySimpleObject.IsValid());
		}
	}

	TEST_CASE_NAMED(FNamedTest, "LowLevelTestSample::TestSample", "[unit]")
	{
		SECTION("Sample")
		{
            TSharedPtr<FMySimpleClass> MySimpleObject = MakeShared<FMySimpleClass>();
			CHECK(MySimpleObject.IsValid());
		}
	}

	TEST_CASE("LowLevelTestSample::MyModule::TestSample", "[unit]")
	{
		SECTION("Sample")
		{
            TSharedPtr<FMySimpleClass> MySimpleObject = MakeShared<FMySimpleClass>();
			CHECK(MySimpleObject.IsValid());
		}
	}
}