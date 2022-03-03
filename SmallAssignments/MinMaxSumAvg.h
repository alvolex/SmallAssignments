#pragma once
#include <string>

class MinMaxSumAvg
{
public:
    static void CalculateValues(std::string str);
    static void TryAddIntToArray(std::string& numAsString, int& arrIndex, int intArray[10], bool &NonStringInput);
};
