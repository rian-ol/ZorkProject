#include "wordlegame.h"

const int MaxGuess = 5;
int guessCount=0;
std::string answer= "";
int whileCounter= 0;


int wordlegame()
{
    //wordlegameCount =1;
    std::string guess= "";
    
    PickWord();
    while (guessCount<MaxGuess && guess!=answer)
    {   
        std::cout << "Please enter a word: " << std::endl;
        std::cin>> guess;
        if (isString(guess) && guess.std::string::length()==5)
        {
            CheckCorrect(guess);
        }
        else{
            std::cout<<"Please only enter a word that is 5 letters long"<<std::endl;
        }
        
       
    }
    if (guessCount==MaxGuess && guess!=answer)
    {
        std::cout <<std::endl;
        std::cout<<"You have run out of guesses"<<std::endl;
    }
    
    
    return 0; 
}

bool isString(std::string word){
    
    for (int i = 0; i < word.length(); i++)
    {
        if(isdigit(word[i]) || word[i]==' '){
            return false;
        }
    }
    
    return true;
}

//increases guess counter, and compares each letter from the guess to the actual word to see if there is a match
void CheckCorrect(std::string word){
    guessCount++;
    whileCounter =0;
    std::string correctLetters= "The correct letter(s) from this guess are: ";
    if(word == answer){ 
      std::cout<<"Correct answer!"<<std::endl;
      return;
    }else
    {
          for (int i = 0; i < 5; i++)
        {
            for (int y = 0; y < 5; y++)
            {
                if(word[y] == answer[i]){
                    if (y == i)
                    {
                        correctLetters = correctLetters + word[y] + " (correct position!), ";
                    }else{
                        correctLetters = correctLetters + word[y] + ", ";                
                    }                    
                }
            }            
        }
    }
    //checks if there was any letters correctly guessed
    if (correctLetters.length() == 43)
    {
        correctLetters = "You didn't guess any correct letters!";
    }
    
    

    std::cout<<correctLetters<<std::endl;
    
    while(guessCount<MaxGuess &&  whileCounter!=1){
        std::cout<<"You have guessed "<<guessCount<<" time(s). You have "<< MaxGuess-guessCount<< " guesse(s) left."<< std::endl;
        whileCounter = 1;
    }
    
    return;
}


//
void PickWord(){
    int RNG;
    int wordcount = 0;
    std::fstream myFile;
    myFile.open("words.txt", std::ios::in);
    std::string line, listOfWords = "";
    if (myFile.is_open())
    {
       while(getline(myFile, line)){
            listOfWords = listOfWords +"," + line;
            wordcount++;
        //    std::cout<<listOfWords<<std::endl;
        }
    }
    myFile.close();

    srand((unsigned) time(NULL));
    RNG = ((rand()%wordcount)+1) * 6;
    // std::cout<<RNG<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        RNG++;
        answer = answer + listOfWords[RNG];
        
    }
    // std::cout<<answer<<std::endl;
    return;
}
