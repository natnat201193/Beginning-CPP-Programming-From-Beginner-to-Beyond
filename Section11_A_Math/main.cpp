// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Math examples
#include <iostream>
#include <cmath>

int main()
{
    double Num{};

    std::cout << "Enter a number (double): ";
    std::cin >> Num;

    std::cout
        << "The sqrt of " << Num << " is: " << sqrt(Num) << std::endl
        << "The cubed root of " << Num << " is: " << cbrt(Num) << std::endl
        << "The sine of " << Num << " is: " << sin(Num) << std::endl
        << "The cosine of " << Num << " is: " << cos(Num) << std::endl
        << "The ceil of " << Num << " is: " << ceil(Num) << std::endl
        << "The floor of " << Num << " is: " << floor(Num) << std::endl
        << "The round of " << Num << " is: " << round(Num) << std::endl;

    double Power{};
    std::cout << std::endl << "Enter a power to raise " << Num << " to: ";
    std::cin >> Power;
    std::cout << Num << " raised to the " << Power << " power is: " << pow(Num, Power) << std::endl;

    std::cout << std::endl;
    return 0;
}
