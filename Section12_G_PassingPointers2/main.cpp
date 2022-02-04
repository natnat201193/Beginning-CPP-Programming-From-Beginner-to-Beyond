// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Passing Pointers 2
#include <iostream>
#include <string>
#include <vector>

void Swap(int* A, int* B)
{
    int Temp = *A;
    *A = *B;
    *B = Temp;
}

int main()
{
    int X{ 100 }, Y{ 200 };
    std::cout << std::endl << "X: " << X << std::endl;
    std::cout << "Y: " << Y << std::endl;

    Swap(&X, &Y);

    std::cout << std::endl << "X: " << X << std::endl;
    std::cout << "Y: " << Y << std::endl;

    std::cout << std::endl;
    return 0;
}
