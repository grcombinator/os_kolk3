#ifndef INVOKER_H
#define INVOKER_H

#include "Command.h"
#include <vector>

class Invoker {
private:
    std::vector<Command*> commands;

public:
    void addCommand(Command* cmd) {
        commands.push_back(cmd);
    }

    void executeCommands() {
        for (Command* cmd : commands) {
            cmd->execute();
        }
    }
};

#endif // INVOKER_H
