// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

int main() {

    int Num1{ 10 };
    int Num2{ 20 };

    Num1 = Num2;

    std::cout 
        << "num1 is " << Num1 << std::endl
        << "num2 is " << Num2 << std::endl << std::endl;

    return 0;
}
