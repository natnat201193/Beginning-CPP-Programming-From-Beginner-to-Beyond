// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Conditional Operator
#include <iostream>

int main() 
{
    int Num {};
        
    std::cout << "Enter an integer: ";
    std::cin >> Num;
        
    if (Num % 2 == 0) 
        std::cout << Num << " is even" << std::endl;
    else    
        std::cout << Num << " is odd" << std::endl;
            
    std::cout << Num << " is " << ( (Num %2 ==0) ? "even" : "odd"  ) << std::endl;

    int Num1{}, Num2{};

    std::cout << "Enter two integers separated by a space: ";
    std::cin >> Num1 >> Num2;

    if (Num1 != Num2) 
    {
        std::cout 
            << "Largest: " << ((Num1 > Num2) ? Num1 : Num2) << std::endl
            << "Smallest: " << ((Num1 < Num2) ? Num1 : Num2) << std::endl;
    }
    else 
    {
        std::cout << "The Numbers are the same" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
