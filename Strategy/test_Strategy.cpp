#include <gtest/gtest.h>
#include "Context.h"
#include "ConcreteStrategyA.h"

TEST(StrategyTest, ExecuteAlgorithm) {
    ConcreteStrategyA strategyA;
    Context context(&strategyA);

    testing::internal::CaptureStdout();
    context.executeStrategy();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Executing algorithm A\n");
}
