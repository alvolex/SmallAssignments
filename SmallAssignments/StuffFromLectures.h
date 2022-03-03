#pragma once
#include <functional>

class StuffFromLectures
{
public:
    static void Mainish();
    static void doSomething(int a, std::function<int(int,int)> f);
    static int funcToPass(int a, int b);
    static void PassingFunctions();
};
