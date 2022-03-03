#include "StuffFromLectures.h"

#include <algorithm>
#include <functional>
#include <iostream>


void StuffFromLectures::Mainish()
{
    PassingFunctions();    
}

//Pass func as a param
/*void doSomething(int a, int (*func)(int, int))
{
    std::cout << a + func(a, 5);
}*/

//Functor
void StuffFromLectures::doSomething(int a, std::function<int(int,int)> f)
{
    std::cout << a + f(a,5)  << std::endl;
}

int StuffFromLectures::funcToPass(int a, int b)
{
    return a + b;
}

void StuffFromLectures::PassingFunctions()
{
    int x = 5; 
    
    /*doSomething(10, &funcToPass);    //Pass reference to a function
    doSomething(10, [](int a, int b)-> int{ return  a+b;});   //Lambda
    doSomething(10, [&x](int a, int b)-> int{ return  a+x;}); //Lambda with captured var*/
    
}
