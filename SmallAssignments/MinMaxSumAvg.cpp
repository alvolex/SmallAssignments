#include "MinMaxSumAvg.h"

#include <iostream>

void MinMaxSumAvg::CalculateValues(std::string str)
{
    std::string numAsString = "";

    int arrIndex = 0;
    int intArray[10];
    bool NonStringInput = false;

    //Evaluate string
    for (int i = 0; i < str.length(); i++)
    {
        if (arrIndex >= 10)
        {
            std::cout << "Some values have been left out, only counting the first 10." << std::endl;
            break;
        }
        
        if (!(str.at(i) == ','))
        {
            bool isNum = false;                   
            
            try
            {
                std::string tmpstr = "";
                tmpstr += str.at(i);
                auto tmp = std::stoi(tmpstr);
                isNum = true;
            }
            catch (...)
            {
                NonStringInput = true;
            }

            if (isNum)
            {
                numAsString += str.at(i);
            }
            
        }
        else
        {
            TryAddIntToArray(numAsString, arrIndex, intArray, NonStringInput); 
        }
    }    
    
    if (arrIndex < 10)
    {
        TryAddIntToArray(numAsString, arrIndex, intArray, NonStringInput); 
    }   

    //Calculate values
    int sum = 0;
    int min = 9999;
    int max = 0;
    float avg = 0;
    
    for (int i = 0; i < arrIndex; ++i)
    {          
        //std::cout << intArray[i] << std::endl;
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
    std::cout << "\n==============================";
    printf("\nSum: %i | Min: %i | Max: %i | Avg: %.2f | Input contained non-integers: %s\n", sum, min ,max, avg, NonStringInput ? "yes" : "no");
    std::cout << "==============================";
}


void MinMaxSumAvg::TryAddIntToArray(std::string& numAsString, int& arrIndex, int intArray[10], bool& NonStringInput)
{
    try
    {
        intArray[arrIndex] = stoi(numAsString);
        numAsString = "";
        arrIndex++; 
    }
    catch (const std::exception&)
    {
        NonStringInput = true;
    }
}
