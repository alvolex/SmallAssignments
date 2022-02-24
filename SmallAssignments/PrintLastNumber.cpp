#include "PrintLastNumber.h"

#include <iostream>
#include <string>

void PrintLastNumber::LastNum(int num)
{
   while (num > 10)
   {
      std::cout << num % 10 << std::endl;
      num = num / 10;
   }
   std::cout << num % 10 << std::endl;
   
}
