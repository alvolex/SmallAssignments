#include "EvenOrOdd.h"

#include <iostream>


void EvenOrOdd::CheckNum(int i)
{
    if (i % 2 == 0)
    {
        std::cout << "It's even!" << std::endl;
        return;
    }

    std::cout << "It's odd" << std::endl;
}
