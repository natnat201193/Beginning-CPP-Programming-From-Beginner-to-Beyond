// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Simple pointers
#include <iostream>
#include <vector>
#include <string>

int main()
{
    int Num{ 10 };
    std::cout << "Value of Num is: " << Num << std::endl;
    std::cout << "sizeof of Num is: " << sizeof Num << std::endl;
    std::cout << "Address of Num is: " << &Num << std::endl;

    int* P{};
    std::cout << std::endl << "Value of P is: " << P << std::endl; // this would show garbage data if P was not initialised
    std::cout << "sizeof of P is: " << sizeof P << std::endl;
    std::cout << "Address of P is: " << &P << std::endl;

    P = nullptr;
    std::cout << std::endl << "Value of P is: " << P << std::endl;

    int* P1{ nullptr };
    double* P2{ nullptr };
    unsigned long long* P3{ nullptr };
    std::vector<std::string>* P4{ nullptr };
    std::string* P5{ nullptr };

    std::cout << std::endl << "sizeof P1 is: " << sizeof P1 << std::endl;
    std::cout << "sizeof P2 is: " << sizeof P2 << std::endl;
    std::cout << "sizeof P3 is: " << sizeof P3 << std::endl;
    std::cout << "sizeof P4 is: " << sizeof P4 << std::endl;
    std::cout << "sizeof P5 is: " << sizeof P5 << std::endl;

    int Score{ 10 };
    //double HighTemp{ 100.7 };

    int* ScorePtr{ nullptr };

    ScorePtr = &Score;
    std::cout << "Value of Score is: " << Score << std::endl;
    std::cout << "Address of Score is: " << &Score << std::endl;
    std::cout << "Value of ScorePtr is: " << ScorePtr << std::endl;
    // ScorePtr = &HighTemp;     // Compiler error

    std::cout << std::endl;
    return 0;
}