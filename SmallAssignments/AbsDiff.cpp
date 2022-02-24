#include "AbsDiff.h"

#include <iostream>


void AbsDiff::CheckAbsDiff(int i, int x)
{
    if (i < 0) i *= -1;    
    if (x < 0) x *= -1;

    auto AbsDiff = i+x;
    
    std::cout << "The absolute difference is: " << AbsDiff << std::endl;
}
