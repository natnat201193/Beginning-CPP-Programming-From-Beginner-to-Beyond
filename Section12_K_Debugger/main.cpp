// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Debugger
// Watch the video which goes over how to use the debugger!
#include <iostream>

void swap(int* A, int* B)
{
    int Temp = *A;
    *A = *B;
    *B = Temp;
}

int main()
{
    int I{ 5 };
    while (I > 0)
    {
        std::cout << I << std::endl;
        I--;
    }

    int X{ 100 }, Y{ 200 };
    std::cout << std::endl << "X: " << X << std::endl;
    std::cout << "Y: " << Y << std::endl;

    swap(&X, &Y);

    std::cout << std::endl << "X: " << X << std::endl;
    std::cout << "X: " << Y << std::endl;
    std::cout << std::endl;
    return 0;
}
