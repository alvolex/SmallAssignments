#include "AbsDiff.h"

#include <iostream>


void AbsDiff::CheckAbsDiff(int i, int x)
{
    auto AbsDiff = i-x;

    if (AbsDiff < 0)
    {
        AbsDiff *= -1;
    }
    
    std::cout << "The absolute difference is: " << AbsDiff << std::endl;
}
