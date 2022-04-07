#ifndef commands_H_
#define commands_H_

#include <iostream>
#include <string>
#include <vector>

class commands{
    private: static std::vector<std::string> validCommands;

    public:
    commands();
    bool isCommands(std::string input);
    void showCommands();
};

#endif // commands_H_