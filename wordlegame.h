#ifndef WORDLEGAME_H_
#define WORDLEGAME_H_

//#include "common.h"
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

class wordlegameclass
{
private:
   const int MaxGuess =5;
public:
    
    int whileCounter;
    int guessCount;
};
    void CheckCorrect(std::string);
    void PickWord();
    bool isString(std::string);
#endif // WORDLEGAME_H_
