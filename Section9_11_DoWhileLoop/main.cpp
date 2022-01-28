// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Do-while
// Simple Menu
#include <iostream>

int main()
{
    char Selection{};

    do 
    {
        std::cout 
            << std::endl << "---------------------" << std::endl
            << "1. Do this" << std::endl
            << "2. Do that" << std::endl
            << "3. Do something else" << std::endl
            << "Q. Quit" << std::endl
            << std::endl << "Enter your Selection: ";
        std::cin >> Selection;

        switch (Selection)
        {
            case '1':
                std::cout << "You chose 1 - Do this" << std::endl;
                break;
            case '2':
                std::cout << "You chose 2 - Do that" << std::endl;
                break;
            case '3':
                std::cout << "You chose 3 - Do something else" << std::endl;
                break;
            case 'q': 
            case 'Q':
                std::cout << "Goodbye..." << std::endl;
                break;
            default:
                std::cout << "Unknown option -- try again..." << std::endl;
                break;
        }
    }
    while (Selection != 'q' && Selection != 'Q');

    std::cout << std::endl;
    return 0;
}