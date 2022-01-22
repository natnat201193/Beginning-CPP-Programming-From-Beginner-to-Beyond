// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// If-Else Statement
#include <iostream>

int main() 
{
    int Num{};
    const int Target{ 10 };

    std::cout << "Enter a Number  and I'll compare it to " << Target << ": ";
    std::cin >> Num;

    if (Num >= Target) 
    {
        std::cout
            << std::endl << "==================================" << std::endl
            << Num << " is greater than or equal to " << Target << std::endl;

        int Diff{ Num - Target };

        std::cout
            << Num << " is " << Diff << " greater than " << Target << std::endl;
    }
    else 
    {
        std::cout
            << std::endl << "==================================" << std::endl
            << Num << " is less than " << Target << std::endl;

        int Diff{ Target - Num };

        std::cout
            << Num << " is " << Diff << " less than " << Target << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
