#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

class AbstractClass {
public:
    void templateMethod() {
        stepOne();
        stepTwo();
    }

protected:
    virtual void stepOne() = 0;
    virtual void stepTwo() = 0;
};

#endif // ABSTRACTCLASS_H
