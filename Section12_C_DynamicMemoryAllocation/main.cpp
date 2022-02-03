// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Dynamic Memory Allocation
#include <iostream>

int main()
{
    int* IntPtr{ nullptr };
    IntPtr = new int; // allocate the int on the heap
    std::cout << IntPtr << std::endl; // use it
    delete IntPtr; // release it

    size_t Size{ 0 };
    double* TempPtr{ nullptr };
    std::cout << "How many temps? ";
    std::cin >> Size;
    TempPtr = new double[Size]; // allocate array on the heap
    std::cout << TempPtr << std::endl; // use it
    delete[] TempPtr; // release it

    std::cout << std::endl;
    return 0;
}
