// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// If Statement 

#include <iostream>

int main() 
{
    int Num{};
    const int Min{ 10 };
    const int Max{ 100 };

    std::cout << "Enter a Number between " << Min << " and " << Max << ": ";
    std::cin >> Num;

    if (Num >= Min)
    {
        std::cout
            << std::endl << "=========== If statement 1 =============" << std::endl
            << Num << " is greater than or equal to " << Min << std::endl;

        int Diff{ Num - Min };
        std::cout
            << Num << " is " << Diff << " greater than " << Min << std::endl;
    }

    if (Num <= Max)
    {
        std::cout
            << std::endl << "=========== If statement 2 =============" << std::endl
            << Num << " is less than or equal to " << Max << std::endl;

        int Diff{ Max - Num };
        std::cout
            << Num << " is " << Diff << " less than " << Max << std::endl;
    }

    if (Num >= Min && Num <= Max)
    {
        std::cout
            << std::endl << "=========== If statement 3 =============" << std::endl
            << Num << " is in range " << std::endl
            << "This means statements 1 and 2 must also display" << std::endl;
    }

    if (Num == Min || Num == Max)
    {
        std::cout
            << std::endl << "=========== If statement 4 =============" << std::endl
            << Num << " is right on a boundary" << std::endl
            << "This means all 4 statements display. " << std::endl;
    }

    std::cout << std::endl;
    return 0;
}