// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Pass-by-reference
#include <iostream>
#include <string>
#include <vector>

void PassByRef1(int &Num);
void PassByRef2(std::string &S);
void PassByRef3(std::vector<std::string> &V);
void PrintVector(std::vector<std::string> &V);

void PassByRef1(int &Num)
{
    Num = 1000;
}

void PassByRef2(std::string &S)
{
    S = "Changed";
}

void PassByRef3(std::vector<std::string> &V)
{
    V.clear();  // delete all vector elements
}

void PrintVector(std::vector<std::string> &V)
{
    for (auto &S : V)
        std::cout << S << " ";
    std::cout << std::endl;
}

int main()
{
    int Num{ 10 };
    int AnotherNum{ 20 };

    std::cout << "Num before calling PassByRef1: " << Num << std::endl;
    PassByRef1(Num);
    std::cout << "Num after calling PassByRef1: " << Num << std::endl;

    std::cout << std::endl << "AnotherNum before calling PassByRef1: " << AnotherNum << std::endl;
    PassByRef1(AnotherNum);
    std::cout << "AnotherNum after calling PassByRef1: " << AnotherNum << std::endl;

    std::string Name{ "Frank" };
    std::cout << std::endl << "Name before calling PassByRef2: " << Name << std::endl;
    PassByRef2(Name);
    std::cout << "Name after calling PassByRef2: " << Name << std::endl;

    std::vector<std::string> Stooges{ "Larry", "Moe", "Curly" };
    std::cout << std::endl << "Stooges before calling PassByRef3: ";
    PrintVector(Stooges);
    PassByRef3(Stooges);
    std::cout << "Stooges after calling PassByRef3: ";
    PrintVector(Stooges);

    std::cout << std::endl;
    return 0;
}
