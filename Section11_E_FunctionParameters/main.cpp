// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Function Parmameters
#include <iostream>
#include <string>
#include <vector>

void PassByValue1(int Num);
void PassByValue2(std::string s);
void PassByValue3(std::vector<std::string> V);
void PrintVector(std::vector<std::string> V);

void PassByValue1(int Num)
{
    Num = 1000;
}

void PassByValue2(std::string S)
{
    S = "Changed";
}

void PassByValue3(std::vector<std::string> V)
{
    V.clear();  // delete all vector elements
}

void PrintVector(std::vector<std::string> V)
{
    for (auto S : V)
        std::cout << S << " ";
    std::cout << std::endl;
}

int main()
{
    int Num{ 10 };
    int AnotherNum{ 20 };

    std::cout << "Num before calling PassByValue1: " << Num << std::endl;
    PassByValue1(Num);
    std::cout << "Num after calling PassByValue1: " << Num << std::endl;

    std::cout << std::endl << "AnotherNum before calling PassByValue1: " << AnotherNum << std::endl;
    PassByValue1(AnotherNum);
    std::cout << "AnotherNum after calling PassByValue1: " << AnotherNum << std::endl;

    std::string Name{ "Frank" };
    std::cout << std::endl << "Name before calling PassByValue2: " << Name << std::endl;
    PassByValue2(Name);
    std::cout << "Name after calling PassByValue2: " << Name << std::endl;

    std::vector<std::string> Stooges{ "Larry", "Moe", "Curly" };
    std::cout << std::endl << "Stooges before calling PassByValue3: ";
    PrintVector(Stooges);
    PassByValue3(Stooges);
    std::cout << "Stooges after calling PassByValue3: ";
    PrintVector(Stooges);

    std::cout << std::endl;
    return 0;
}
