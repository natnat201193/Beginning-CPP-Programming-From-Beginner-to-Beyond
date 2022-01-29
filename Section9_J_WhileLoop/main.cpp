// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// While Loop
#include <iostream>

int main() 
{
    int Num{};
    std::cout << "Enter a positive integer to start the countdown: ";
    std::cin >> Num;

    while (Num > 0) 
    {
        std::cout << Num << std::endl;
        --Num;
    }
    std::cout << "Blastoff!" << std::endl;

    int Num2{};
    std::cout << std::endl << "Enter a postive integer to count up to: ";
    std::cin >> Num2;

    int I{ 1 };
    while (Num2 >= I) 
    {
        std::cout << I << std::endl;
        I++;
    }

    int Number{};
    std::cout << std::endl << "Enter an integer less than 100: ";
    std::cin >> Number;

    while (Number >= 100) // !(Number < 100)
    {
        std::cout << "Enter an integer less than 100: ";
        std::cin >> Number;
    }

    std::cout << "Thanks" << std::endl;

    bool Done{ false };
    int Number2{ 0 };

    while (!Done) 
    {
        std::cout << std::endl << "Enter an integer between 1 and 5: ";
        std::cin >> Number2;
        if (Number2 <= 1 || Number2 >= 5)
            std::cout << "Out of range, try again" << std::endl;
        else 
        {
            std::cout << "Thanks!" << std::endl;
            Done = { true };
        }
    }

    std::cout << std::endl;
    return 0;
}
