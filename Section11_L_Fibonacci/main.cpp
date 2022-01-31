// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Recursion - Fibonacci
#include <iostream>

unsigned long long CallCount{};

unsigned long long Fibonacci(unsigned long long N);

unsigned long long Fibonacci(unsigned long long N)
{
    CallCount += 1;
    return ((N <= 1) ? N : (Fibonacci(N - 1) + Fibonacci(N - 2))); // recursion
}

int main()
{
    std::cout << Fibonacci(5) << std::endl;  // 5
    std::cout << "Fibonacci called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };

    std::cout << Fibonacci(30) << std::endl; // 832040
    std::cout << "Fibonacci called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };

    std::cout << Fibonacci(40) << std::endl; // 102334155
    std::cout << "Fibonacci called " << CallCount << " times." << std::endl << std::endl;
    CallCount = { 0 };

    return 0;
}
