#include "GuessNumber.h"

#include <iostream>


void GuessNumber::StartGuess()
{
    bool IsGuessing = true;
    int NumberOfGuesses = 0;
    int LuckyNumber = rand() % 10;

    std::cout << "Guess a number between 0 and 10" << std::endl;   
    
    int CurrentGuess = 999;
    
    while (IsGuessing)
    {
        std::cin >> CurrentGuess;
        NumberOfGuesses++;
        if (CurrentGuess == LuckyNumber)
        {
            std::cout << "Congrats, you win! You guessed " << NumberOfGuesses << " times." << std::endl;
            IsGuessing = false;
        }
        else
        {
            std::cout << "Wrong guess, try again!" << std::endl;
        }
    }
}
