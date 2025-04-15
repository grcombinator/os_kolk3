#include <gtest/gtest.h>
#include "ConcreteClassA.h"
#include "ConcreteClassB.h"

TEST(TemplateMethodTest, ExecuteTemplateMethod) {
    ConcreteClassA classA;
    
    testing::internal::CaptureStdout();
    classA.templateMethod();
    std::string outputA = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ(outputA, "ConcreteClassA: Step One\nConcreteClassA: Step Two\n");

    ConcreteClassB classB;
    
    testing::internal::CaptureStdout();
    classB.templateMethod();
    std::string outputB = testing::internal::GetCapturedStdout();

    EXPECT_EQ(outputB, "ConcreteClassB: Step One\nConcreteClassB: Step Two\n");
}
