// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Passing Pointers 1
#include <iostream>

void double_data(int* IntPtr)
{
    *IntPtr *= 2;
}

int main()
{
    int Value{ 10 };
    int* IntPtr{ nullptr };

    std::cout << "Value: " << Value << std::endl;
    double_data(&Value);
    std::cout << "Value: " << Value << std::endl;

    std::cout << "-----------------------------" << std::endl;
    IntPtr = &Value;
    double_data(IntPtr);
    std::cout << "Value: " << Value << std::endl;

    std::cout << std::endl;
    return 0;
}
