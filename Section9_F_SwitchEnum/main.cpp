// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Switch with enumeration
#include <iostream>

int main() 
{
    enum class Direction 
    {
        Left,
        Right,
        Up,
        Down
    };

    Direction Heading{ Direction::Left };

    switch (Heading)
    {
        case Direction::Left:
            std::cout << "Going left" << std::endl;
            break;
        case Direction::Right:
            std::cout << "Going right" << std::endl;
            break;
        case Direction::Up:
            std::cout << "Going up" << std::endl;
            break;
        case Direction::Down:
            std::cout << "Going down" << std::endl;
            break;
        default:
            std::cout << "OK" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
