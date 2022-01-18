// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Equality Operators

#include <iostream>

int main() 
{
    bool EqualResult{ false };
    bool NotEqualResult{ false };

    int Num1{}, Num2{};

    std::cout << std::boolalpha; // will display true/false instead of 1/0 for booleans

    std::cout << "Enter two integers separated by a space: ";
    std::cin >> Num1 >> Num2;
    EqualResult = (Num1 == Num2);
    NotEqualResult = (Num1 != Num2);
    std::cout << "Comparision result (equals) : " << EqualResult << std::endl;
    std::cout << "Comparision result (not equals) : " << NotEqualResult << std::endl << std::endl;

    char Char1{}, Char2{};
    std::cout << "Enter two characters separated by a space: ";
    std::cin >> Char1 >> Char2;
    EqualResult = (Char1 == Char2);
    NotEqualResult = (Char1 != Char2);
    std::cout << "Comparision result (equals) : " << EqualResult << std::endl;
    std::cout << "Comparision result (not equals) : " << NotEqualResult << std::endl << std::endl;

    double Double1{}, Double2{};
    std::cout << "Enter two doubles separated by a space: ";
    std::cin >> Double1 >> Double2;
    EqualResult = (Double1 == Double2);
    NotEqualResult = (Double1 != Double2);
    std::cout << "Comparision result (equals) : " << EqualResult << std::endl;
    std::cout << "Comparision result (not equals) : " << NotEqualResult << std::endl << std::endl;

    std::cout << "Enter an integer and a double separated by a space: ";
    std::cin >> Num1 >> Double1;
    EqualResult = (Num1 == Double1);
    NotEqualResult = (Num1 != Double1);
    std::cout << "Comparision result (equals) : " << EqualResult << std::endl;
    std::cout << "Comparision result (not equals) : " << NotEqualResult << std::endl << std::endl;

    std::cout << std::endl;
    return 0;
}