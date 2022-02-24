#include "Palindrome.h"

#include <iostream>

void Palindrome::CheckPalindrome(std::string Word)
{
    for (int i = 0; i < Word.length(); ++i)
    {
        if (!(Word[i] == Word[Word.length() - 1 - i]))
        {
            std::cout << "Not a palindrome.." << std::endl;
            return;
        }
    }
    
    std::cout << "It is a palindrome!" << std::endl;
}
