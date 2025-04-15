#include "Invoker.h"
#include "ConcreteCommand.h"
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteClassA.h"
#include "ConcreteClassB.h"

int main() {
    // Пример использования шаблона "Команда"
    Receiver receiver;
    ConcreteCommand command(&receiver);
    Invoker invoker;
    invoker.addCommand(&command);
    invoker.executeCommands();

    // Пример использования шаблона "Стратегия"
    ConcreteStrategyA strategyA;
    Context context(&strategyA);
    context.executeStrategy();

    // Пример использования шаблона "Шаблонный метод"
    ConcreteClassA classA;
    classA.templateMethod();

    ConcreteClassB classB;
    classB.templateMethod();

    return 0;
}
