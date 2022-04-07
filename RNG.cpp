//random number generator for puzzle room.
#include "RNG.h"


 


int RNG(){
    guessCount=0;
    RNGgameCount =1;
    RNGclass myRNG;
    myRNG.createAns();
    
       while(guessCount!=5 && guess!=answer){
            std::cout << "Please enter a random number"<<std::endl;
            std::cin>>guess;
        
         if (myRNG.checkInt(guess))
            {
                myRNG.checkAns(guess);
            }else{
            std::cout << "Please enter a valid number"<<std::endl;
             }
        }    
    
    
    
    
    return 0;
}


bool checkInt(std::string number){
    std::string actualNum = "";
    for(int i=0;i<number.length();i++){
        if (isdigit(number[i]))
        {
            actualNum = actualNum + number[i];
           // std::cout << actualNum<<std::endl;
        }
    }
    if (number==actualNum)
    {
        return true;
    }
    guess = number;
    return false;
}

void checkAns(std::string){
    guessCount++;
    if (guess == answer)
    {
        std::cout << "Congrats! You guessed correctly."<<std::endl;
        std::cout << "It took you "<<guessCount<<" guesse(s)."<<std::endl;
    }else{
        std::cout << "That was the incorrect guess."<<std::endl;
        std::cout << "You have guessed "<< guessCount<< " amount of time(s). You have "<< 5-guessCount<<" guesse(s) left."<<std::endl;
    }
    
}


void createAns(){
  srand((unsigned) time(0));
    int answerInt = ((rand()%10)+1); 
    answer = std::to_string(answerInt);
    // std::cout << answer << std::endl;
}
