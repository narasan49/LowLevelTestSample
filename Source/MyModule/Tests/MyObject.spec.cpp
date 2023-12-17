#include "Misc/AutomationTest.h"

#include "MyObject.h"

BEGIN_DEFINE_SPEC(FMyObjectSpec, "MyModule.MyObject", EAutomationTestFlags::ProductFilter | EAutomationTestFlags::ApplicationContextMask)

END_DEFINE_SPEC(FMyObjectSpec)

void FMyObjectSpec::Define()
{
    Describe("MyObject", [this]()
    {
        It("should be able to be created", [this]()
        {
            auto* MyObject = NewObject<UMyObject>();
            TestNotNull("MyObject", MyObject);
        });
    });
}