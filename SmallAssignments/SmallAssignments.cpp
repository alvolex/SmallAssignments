#include <iostream>

#include "SmallAssignments.h"

#include "AbsDiff.h"
#include "CelsiusToFahrenheit.h"
#include "GuessNumber.h"
#include "Palindrome.h"

void MainMenuMessage()
{        
    std::cout << std::endl <<"Welcome, use your number keys to start an assignment" << std::endl;    
    std::cout << "1 = Convert to fahrenheit (easy)" << std::endl;    
    std::cout << "2 = Palindrome (easy)" << std::endl;        
    std::cout << "3 = Abs diff (easy)" << std::endl;        
    std::cout << "4 = Guess number (easy)" << std::endl;        
}

int main(int argc, char* argv[])
{
    int Input;
    bool ShouldKeepGoing = true;
    
    while (ShouldKeepGoing)
    {
        MainMenuMessage();
        
        std::cin >> Input;
        switch (Input)
        {
        case 1:
            {
                std::cout << "Write a degree in celsius.." << std::endl;
                float Celsius;
                std::cin >> Celsius;
                CelsiusToFahrenheit::ConvertToFahrenheit(Celsius);
                break;
            }
        case 2:
            {
                std::cout << "Write a word to check for palindrome" << std::endl;
                std::string inputString;
                std::cin >> inputString;
                Palindrome::CheckPalindrome(inputString);
                break;
            }
        case 3:
            {
                std::cout << "Write two ints to check abs diff" << std::endl;
                int num1, num2;
                std::cin >> num1;
                std::cin >> num2;
                AbsDiff::CheckAbsDiff(num1,num2);
                break;
            }
        case 4:
            {
                GuessNumber::StartGuess();
                break;
            }
        case 99:
            {
                ShouldKeepGoing = false;
                std::cout << "Ciao.";
                break;
            }
        default: std::cout << "Try again...";
        }   
    }
    return 0; 
}
