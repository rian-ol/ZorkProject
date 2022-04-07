#ifndef RNG_H_
#define RNG_H_

#include "common.h"
#include <iostream>
#include <ctime>
#include <string>

class RNGclass
{
private:
    /* data */
public:
    bool checkInt(std::string);
    void checkAns(std::string);
    void createAns();
    
};
   std::string answer;
    std::string guess;
    int guessCount;

#endif // RNG_H_

