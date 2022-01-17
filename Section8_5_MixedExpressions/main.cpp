// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.

    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>

int main() 
{
    int Total{ };
    int Num1{ }, Num2{ }, Num3{ };
    const int Count{ 3 };

    std::cout << "Enter 3 integers separated by spaces: ";
    std::cin >> Num1 >> Num2 >> Num3;

    Total = { Num1 + Num2 + Num3 };

    double Average{ static_cast<double>(Total) / Count };
    //double Average = (double)Total/Count; // Old-Style

    std::cout 
        << "The 3 numbers were: " << Num1 << "," << Num2 << "," << Num3 << std::endl
        << "The sum of the numbers is: " << Total << std::endl
        << "The average of the numbers is: " << Average << std::endl;

    std::cout << std::endl;
    return 0;
}
