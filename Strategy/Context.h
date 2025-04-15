#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

class Context {
private:
    Strategy* strategy;

public:
    Context(Strategy* s) : strategy(s) {}
    void setStrategy(Strategy* s) {
        strategy = s;
    }
    void executeStrategy() {
        strategy->algorithm();
    }
};

#endif // CONTEXT_H
