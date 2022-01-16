// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

int main() 
{
    const double UsdPerEur{ 1.19 };

    std::cout 
        << "Welcome to the EUR to USD converter" << std::endl
        << "Enter the value in EUR : ";

    double Euros{ 0.0 };

    std::cin >> Euros;

    double Dollars = { Euros * UsdPerEur };

    std::cout << Euros << " euros is equivalent to " << Dollars << " dollars" << std::endl;

    std::cout << std::endl;

    return 0;
}
