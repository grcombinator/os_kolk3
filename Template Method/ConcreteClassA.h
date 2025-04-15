#ifndef CONCRETECLASS_A_H
#define CONCRETECLASS_A_H

#include "AbstractClass.h"
#include <iostream>

class ConcreteClassA : public AbstractClass {
protected:
    void stepOne() override {
        std::cout << "ConcreteClassA: Step One\n";
    }
    void stepTwo() override {
        std::cout << "ConcreteClassA: Step Two\n";
    }
};

#endif // CONCRETECLASS_A_H
