#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
public:
    virtual void algorithm() = 0;
    virtual ~Strategy() {}
};

#endif // STRATEGY_H
