// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Function Overloading
#include <iostream>
#include <string>
#include <vector>

void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);
void print(std::vector<std::string>);

void print(int Num)
{
    std::cout << "Printing int: " << Num << std::endl;
}

void print(double Num)
{
    std::cout << "Printing double: " << Num << std::endl;
}

void print(std::string S)
{
    std::cout << "Printing string: " << S << std::endl;
}

void print(std::string S, std::string T)
{
    std::cout << "Printing 2 strings: " << S << " and " << T << std::endl;
}

void print(std::vector<std::string> V)
{
    std::cout << "Printing vector of strings: ";
    for (auto S : V)
        std::cout << S + " ";
    std::cout << std::endl;
}

int main()
{
    print(100);    // int
    print('A');    //  character is always promoted to int should print 65 ASCII ('A')

    print(123.5);   // double
    print(123.3F);  // Float is promoted to double

    print("C-style string");  // C-style std::string is converted to a C++ string

    std::string S{ "C++ string" };
    print(S);       // C++ string

    print("C-style string", S); // First argument is converted to a C++ string

    std::vector<std::string> ThreeStooges{ "Larry", "Moe", "Curly" };
    print(ThreeStooges);

    std::cout << std::endl;
    return 0;
}
