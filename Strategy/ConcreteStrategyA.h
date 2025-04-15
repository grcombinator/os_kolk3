#ifndef CONCRETE_STRATEGY_A_H
#define CONCRETE_STRATEGY_A_H

#include "Strategy.h"
#include <iostream>

class ConcreteStrategyA : public Strategy {
public:
    void algorithm() override {
        std::cout << "Executing algorithm A\n";
    }
};

#endif // CONCRETE_STRATEGY_A_H
