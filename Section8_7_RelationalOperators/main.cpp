// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Relational Operators

#include <iostream>

int main() 
{
    int Num1{}, Num2{};

    std::cout << std::boolalpha;
    std::cout << "Enter 2 integers separated by a space: ";
    std::cin >> Num1 >> Num2;

    std::cout
        << Num1 << " > " << Num2 << " : " << (Num1 > Num2) << std::endl
        << Num1 << " >= " << Num2 << " : " << (Num1 >= Num2) << std::endl
        << Num1 << " < " << Num2 << " : " << (Num1 < Num2) << std::endl
        << Num1 << " <= " << Num2 << " : " << (Num1 <= Num2) << std::endl;

    const int Lower{ 10 };
    const int Upper{ 20 };

    std::cout << std::endl << "Enter an integer that is greater than " << Lower << " : ";
    std::cin >> Num1;
    std::cout << Num1 << " > " << Lower << " is " << (Num1 > Lower) << std::endl;

    std::cout << std::endl << "Enter an integer that is less than or equal to " << Upper << " : ";
    std::cin >> Num1;
    std::cout << Num1 << " <= " << Upper << " is " << (Num1 <= Upper) << std::endl;

    std::cout << std::endl;
    return 0;
}
