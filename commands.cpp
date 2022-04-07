#include "commands.h"



std::vector<std::string> commands::validCommands;

commands::commands(){
    if (validCommands.empty()){
        validCommands.push_back("N");
        validCommands.push_back("S");
        validCommands.push_back("E");
        validCommands.push_back("W");
        validCommands.push_back("map");
        validCommands.push_back("put");
        validCommands.push_back("take");
    }
    
}

bool commands::isCommands(const std::string input){
    input = std::toLower(input);    
      
        for (unsigned int i = 0; i < validCommands.size(); i++)
        {
            if (validCommands[i].std::string::compare(input)==0)
            {
                /* code */
            }
            
        }
        

    return false;
}