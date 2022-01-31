// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Scope example
#include <iostream>

void LocalExample(int X);
void GlobalExample();
void StaticLocalExample();

int Num{ 300 };    // Global variable - declared outside any class or function

int main()
{
    int Num{ 100 };  // Local to main
    int Num1{ 500 }; // Local to main

    std::cout << "Local Num is : " << Num << " in main" << std::endl;

    {   // creates a new level of scope
        int Num{ 200 };  // local to this inner block
        std::cout << "Local Num is: " << Num << " in inner block in main" << std::endl;
        std::cout << "Inner block in main can see out - Num1 is: " << Num1 << std::endl;
    }

    std::cout << "Local Num is : " << Num << " in main" << std::endl;

    LocalExample(10);
    LocalExample(20);

    GlobalExample();
    GlobalExample();

    StaticLocalExample();
    StaticLocalExample();
    StaticLocalExample();

    std::cout << std::endl;
    return 0;
}

void GlobalExample()
{
    std::cout << std::endl << "Global Num is: " << Num << " in GlobalExample - start" << std::endl;
    Num *= 2;
    std::cout << "Global Num is: " << Num << " in GlobalExample - end" << std::endl;
}

void LocalExample(int X)
{
    int Num{ 1000 };     // local to LocalExample
    std::cout << std::endl << "Local Num is: " << Num << " in LocalExample - start" << std::endl;
    Num = X;
    std::cout << "Local Num is: " << Num << " in LocalExample - end" << std::endl;
    // Num1 in main is not within scope - so it can't be used here.
}

void StaticLocalExample()
{
    static int Num{ 5000 };      // local to StaticLocalExample static - retains it value between calls
    std::cout << std::endl << "Local static  Num is: " << Num << " in StaticLocalExample - start" << std::endl;
    Num += 1000;
    std::cout << "Local static  Num is: " << Num << " in StaticLocalExample - end" << std::endl;
}
