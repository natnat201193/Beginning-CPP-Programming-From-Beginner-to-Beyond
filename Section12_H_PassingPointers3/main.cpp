// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Passing Pointers 3
#include <iostream>
#include <string>
#include <vector>

void display(const std::vector<std::string>* const  V)
{
    //(*V).at(0) = "Funny";
    for (auto &Str : *V)
        std::cout << Str << " ";
    std::cout << std::endl;
    //V = nullptr;
}

void display(int* Array, int Sentinel)
{
    while (*Array != Sentinel)
        std::cout << *Array++ << " ";
    std::cout << std::endl;
}

int main()
{
    std::cout << "-----------------------------" << std::endl;
    std::vector<std::string> Stooges{ "Larry", "Moe", "Curly" };
    display(&Stooges);

    std::cout << std::endl << "-----------------------------" << std::endl;
    int Scores[]{ 100,98,97,79,85,-1 };
    display(Scores, -1);

    std::cout << std::endl;
    return 0;
}
