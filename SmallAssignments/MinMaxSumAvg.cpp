#include "MinMaxSumAvg.h"

#include <iostream>


void MinMaxSumAvg::CalculateValues(std::string str)
{
    std::string numAsString = "";

    int arrIndex = 0;
    int intArray[10];

    //Evaluate string
    for (int i = 0; i < str.length(); ++i)
    {
        if (arrIndex >= 10)
        {
            std::cout << "Some values have been left out, only counting the first 10." << std::endl;
            break;
        }
        
        if (!(str.at(i) == ','))
        {
            numAsString += str.at(i);
        }
        else
        {
            intArray[arrIndex] = stoi(numAsString);
            numAsString = "";
            arrIndex++;
        }
    }
    
    if (arrIndex < 10 && !numAsString.find(','))
    {
        intArray[arrIndex] = stoi(numAsString);
        numAsString = "";
        arrIndex++; 
    }   

    //Calculate values
    int sum = 0;
    int min = 9999;
    int max = 0;
    float avg = 0;
    
    for (int i = 0; i < arrIndex; ++i)
    {  
        
        std::cout << intArray[i] << std::endl;
        sum += intArray[i];

        if (intArray[i] < min)
        {
            min = intArray[i];
        }

        if (intArray[i] > max)
        {
            max = intArray[i];
        }        
    }

    avg = static_cast<float>(sum) / static_cast<float>(arrIndex);
    printf("Sum: %i | Min: %i | Max: %i | Avg: %.2f", sum, min ,max, avg);    
}
