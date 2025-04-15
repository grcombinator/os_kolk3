#ifndef CONCRETECLASS_B_H
#define CONCRETECLASS_B_H

#include "AbstractClass.h"
#include <iostream>

class ConcreteClassB : public AbstractClass {
protected:
    void stepOne() override {
        std::cout << "ConcreteClassB: Step One\n";
    }
    void stepTwo() override {
        std::cout << "ConcreteClassB: Step Two\n";
    }
};

#endif // CONCRETECLASS_B_H
