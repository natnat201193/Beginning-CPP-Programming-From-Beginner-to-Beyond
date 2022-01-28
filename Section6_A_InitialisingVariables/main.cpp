// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

// This program will calculate the area of a room in square feet.

int main()
{
    std::cout << "Enter the width of the room: ";
    int RoomWidth{ };
    std::cin >> RoomWidth;

    std::cout << "Enter the length of the room: ";
    int RoomLength{ };
    std::cin >> RoomLength;

    std::cout << "The area of the room is " << RoomWidth * RoomLength << " square feet." << std::endl;

    return 0;
}
