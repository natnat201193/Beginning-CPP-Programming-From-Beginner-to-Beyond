// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Nested Loops - Multiplication Table

#include <iostream>

int main()
{
    for (int Num1{ 1 }; Num1 <= 10; ++Num1)
    {
        for (int Num2{ 1 }; Num2 <= 10; ++Num2)
        {
            std::cout << Num1 << " X " << Num2 << " = " << Num1 * Num2 << std::endl;
        }
        std::cout << "-----------" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
