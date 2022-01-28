// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

//int age{ 18 }; // Global Variable

int main()
{
    // If there is a local and global variable with the same name, the compiler will search locally first and use the local variable only.

    int age{ 18 }; // Local Variable

    std::cout << age << std::endl;

    return 0;
}
