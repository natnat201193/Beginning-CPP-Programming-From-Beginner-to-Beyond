// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Simple pointers
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string Food{ "Pizza" };  // A Food variable of type string
    std::string* Ptr { &Food }; // A pointer variable, with the name Ptr, that stores the address of Food
    std::cout
        << "Variable: std::string Food{ \"Pizza\" }; // A Food variable of type string" << std::endl
        << "Pointer Variable: std::string* Ptr { &Food }; // A pointer variable, with the name Ptr, that stores the address of Food" << std::endl
        << "Value of Food is: " << Food << std::endl // Output the value of food (Pizza)
        << "Address of &Food is: " << &Food << std::endl // Output the memory address of food (0x6dfed4)
        << "Address of Ptr is: " << Ptr << std::endl << std::endl; // Output the memory address of food with the pointer (0x6dfed4)

    int Num{ 10 };
    std::cout
        << "Value of Num is: " << Num << std::endl
        << "sizeof of Num is: " << sizeof Num << std::endl
        << "Address of Num is: " << &Num << std::endl << std::endl;

    int* P{};
    std::cout 
        << "Value of P is: " << P << std::endl // this would show garbage data if P was not initialised
        << "sizeof of P is: " << sizeof P << std::endl
        << "Address of P is: " << &P << std::endl;
    P = nullptr;
    std::cout << "Value of P is: " << P << std::endl << std::endl;

    int* P1{ nullptr };
    double* P2{ nullptr };
    unsigned long long* P3{ nullptr };
    std::vector<std::string>* P4{ nullptr };
    std::string* P5{ nullptr };

    std::cout
        << "sizeof P1 is: " << sizeof P1 << std::endl
        << "sizeof P2 is: " << sizeof P2 << std::endl
        << "sizeof P3 is: " << sizeof P3 << std::endl
        << "sizeof P4 is: " << sizeof P4 << std::endl
        << "sizeof P5 is: " << sizeof P5 << std::endl << std::endl;

    int Score{ 10 };
    //double HighTemp{ 100.7 };
    int* ScorePtr{ nullptr };
    ScorePtr = &Score;
    std::cout
        << "Value of Score is: " << Score << std::endl
        << "Address of Score is: " << &Score << std::endl
        << "Value of ScorePtr is: " << ScorePtr << std::endl;
    // ScorePtr = &HighTemp;     // Compiler error

    std::cout << std::endl;
    return 0;
}