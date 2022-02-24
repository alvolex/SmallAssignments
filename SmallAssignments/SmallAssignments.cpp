#include <iostream>

#include "SmallAssignments.h"

#include "AbsDiff.h"
#include "CelsiusToFahrenheit.h"
#include "EvenOrOdd.h"
#include "GuessNumber.h"
#include "MinMaxSumAvg.h"
#include "Palindrome.h"
#include "PrintLastNumber.h"

int main(int argc, char* argv[])
{
    int Input;
    bool ShouldKeepGoing = true;
    
    while (ShouldKeepGoing)
    {
        MainMenuMessage(); //Show prompt with the different options
        
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
        case 5:
            {
                std::cout << "Write an int to check if its even or odd" << std::endl;
                int num;
                std::cin >> num;
                EvenOrOdd::CheckNum(num);
                break;
            }
        case 6:
            {
                std::cout << "Write an int and the last digit will be displayed" << std::endl;
                int num;
                std::cin >> num;
                PrintLastNumber::LastNum(num);
                break;
            }
        case 7:
            {
                std::cout << "Type in ints separated by \",\" (Eg. 1,2,3,4)" << std::endl;
                std::string str;
                std::cin >> str;
                MinMaxSumAvg::CalculateValues(str);
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

void MainMenuMessage()
{        
    std::cout << std::endl << std::endl <<"Welcome, use your number keys to start an assignment" << std::endl;    
    std::cout << "1 = Convert to fahrenheit (easy)" << std::endl;    
    std::cout << "2 = Palindrome (easy)" << std::endl;        
    std::cout << "3 = Abs diff (easy)" << std::endl;        
    std::cout << "4 = Guess number (easy)" << std::endl;
    std::cout << "5 = Even or odd (easy)" << std::endl;
    std::cout << "6 = Write an int, it will be printed in reverse order (easy)" << std::endl;
    std::cout << "7 = Get min, max, avg of inputted ints (easy)" << std::endl;
    std::cout << "99 = Exit program." << std::endl;
}
