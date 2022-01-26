// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// For Loop
#include <iostream>
#include <vector>

int main() 
{
    std::cout << "===== Loop 1 =====" << std::endl;
    for (int I{ 1 }; I <= 10; ++I)
        std::cout << I << std::endl;

    std::cout << std::endl << "===== Loop 2 =====" << std::endl;
    for (int I{ 1 } ; I <=10 ; I+=2)
        std::cout << I << std::endl;

    std::cout << std::endl << "===== Loop 3 =====" << std::endl;
    for (int I { 10 }; I > 0; --I)
        std::cout << I << std::endl;
    std::cout << "Blastoff!" << std::endl;

    std::cout << std::endl << "===== Loop 4 =====" << std::endl;
    for (int I{ 10 }; I<=100; I+=10)
    {
        if (I % 15 == 0) 
            std::cout << I << std::endl;
    }

    std::cout << std::endl << "===== Loop 5 =====" << std::endl;
    for (int I{ 1 }, J{ 5 } ; I<=5 ; ++I, ++J)
        std::cout << I << " + " << J << " = " << (I+J) << std::endl;

    std::cout << std::endl << "===== Loop 6 =====" << std::endl;
    for ( int I{ 1 }; I<=100; ++I)
    {
        std::cout << I;
        if (I % 5 ==0)
            std::cout << std::endl;
        else 
            std::cout << " ";
    }
    
    std::cout << std::endl << "===== Loop 7 =====" << std::endl;
    for ( int I{ 1 }; I<=100; ++I)
    {
        std::cout << I << ( (I % 10 ==0) ? "\n" : " ");
    }    
    
    std::cout << std::endl << "===== Loop 8 =====" << std::endl;
    std::vector<int> Nums { 10,20,30,40,50 };
    for (unsigned I{ 0 }; I < Nums.size(); ++I)
        std::cout << Nums[I] << std::endl;

    std::cout << std::endl;
    return 0;
}
