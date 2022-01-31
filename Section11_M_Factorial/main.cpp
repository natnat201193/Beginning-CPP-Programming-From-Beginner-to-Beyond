// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Recursion - Factorial
#include <iostream>

unsigned long long CallCount{};

unsigned long long Factorial(unsigned long long);

unsigned long long Factorial(unsigned long long N)
{
    CallCount += 1;
    return (N == 0 ? 1 : (N * Factorial(N - 1))); // recursive case
}

int main()
{
    std::cout << Factorial(3) << std::endl;    // 6
    std::cout << "Factorial called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };

    std::cout << Factorial(8) << std::endl;    // 40320
    std::cout << "Factorial called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };

    std::cout << Factorial(12) << std::endl;   // 479001600
    std::cout << "Factorial called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };

    std::cout << Factorial(20) << std::endl;   // 2432902008176640000
    std::cout << "Factorial called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };
    return 0;
}
