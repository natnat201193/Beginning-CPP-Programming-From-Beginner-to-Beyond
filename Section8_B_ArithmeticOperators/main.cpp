// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Arithmetic operators
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)

    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/

#include <iostream>

int main() 
{
    int Num1{ 200 };
    int Num2{ 100 };

    //  std::cout << Num1 << " + " <<  Num2 << " = "<< Num1+ Num2 << std::endl;

    int Result{ 0 };

    Result = Num1 + Num2;
    std::cout << "Adding: " << Num1 << " + " << Num2 << " = " << Result << std::endl;

    Result = Num1 - Num2;
    std::cout << "Subtracting: " << Num1 << " - " << Num2 << " = " << Result << std::endl;

    Result = Num1 * Num2;
    std::cout << "Multiplying: " << Num1 << " * " << Num2 << " = " << Result << std::endl;

    Result = Num1 / Num2;
    std::cout << "Dividing: " << Num1 << " / " << Num2 << " = " << Result << std::endl;

    Result = Num2 / Num1; // Result will always be 0 due to using a none float type.
    std::cout << "Dividing: " << Num2 << " / " << Num1 << " = " << Result << std::endl;

    Result = Num1 % Num2;
    std::cout << "Modulo or remainder: " << Num1 << " % " << Num2 << " = " << Result << std::endl;

    Num1 = 10;
    Num2 = 3;

    Result = Num1 % Num2;
    std::cout << "Modulo or remainder: " << Num1 << " % " << Num2 << " = " << Result << std::endl;

    Result = Num1 * 10 + Num2;

    std::cout << 5 / 10 << std::endl; // Result will always be 0 due to using a none float type.

    std::cout << 5.0 / 10.0 << std::endl;

    std::cout << std::endl;

    return 0;
}
