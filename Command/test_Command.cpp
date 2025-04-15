#include <gtest/gtest.h>
#include "ConcreteCommand.h"
#include "Invoker.h"

TEST(CommandTest, ExecuteCommand) {
    Receiver receiver;
    ConcreteCommand command(&receiver);
    Invoker invoker;

    invoker.addCommand(&command);
    
    // Здесь можно использовать вывод в консоль для проверки
    testing::internal::CaptureStdout();
    invoker.executeCommands();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Receiver: Action executed\n");
}
