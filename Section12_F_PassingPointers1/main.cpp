// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Passing Pointers 1
#include <iostream>

void DoubleData(int* IntPtr)
{
    *IntPtr *= 2;
}

int main()
{
    int Value{ 10 };
    int* IntPtr{ nullptr };

    std::cout << "Value: " << Value << std::endl;
    DoubleData(&Value);
    std::cout << "Value: " << Value << std::endl;

    std::cout << "-----------------------------" << std::endl;
    IntPtr = &Value;
    DoubleData(IntPtr);
    std::cout << "Value: " << Value << std::endl;

    std::cout << std::endl;
    return 0;
}
