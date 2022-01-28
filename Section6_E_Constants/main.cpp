// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

/*
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room

    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

int main() 
{
    int NumberOfRooms{ 0 };
    const double  PricePerRoom{ 32.5 };
    const double SalesTax{ 0.06 };
    const int EstimateExpiry{ 30 }; // days

    std::cout
        << "Hello, welcome to Frank's Carpet Cleaning Service"
        << std::endl
        << std::endl
        << "How many rooms would you like cleaned? ";

    std::cin >> NumberOfRooms;

    std::cout
        << std::endl
        << "Estimate for carpet cleaning service"
        << std::endl
        << "Number of rooms: " << NumberOfRooms
        << std::endl
        << "Price per room: $" << PricePerRoom
        << std::endl
        << "Cost : $" << PricePerRoom * NumberOfRooms
        << std::endl
        << "Tax: $" << PricePerRoom * NumberOfRooms * SalesTax
        << std::endl
        << "==============================="
        << std::endl
        << "Total estimate: $" << (PricePerRoom * NumberOfRooms) + (PricePerRoom * NumberOfRooms * SalesTax)
        << std::endl
        << "This estimate is valid for " << EstimateExpiry << " days"
        << std::endl;

    return 0;
}
