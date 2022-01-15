// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

int main() 
{
    int small_rooms{ 0 }, large_rooms{ 0 };
    const double price_per_small_room{ 25.0 }, price_per_large_room{ 35.0 }, sales_tax{ 0.06 };
    const int estimate_expiry{ 30 }; // days

    std::cout 
        << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl << std::endl;

    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> small_rooms;

    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> large_rooms;

    std::cout 
        << std::endl 
        << "Estimate for carpet cleaning service" << std::endl
        << "Number of small rooms: " << small_rooms << std::endl
        << "Number of large rooms: " << large_rooms << std::endl
        << "Price per small room: $" << price_per_small_room << std::endl
        << "Price per large room: $" << price_per_large_room << std::endl
        << "Cost : $" << (price_per_small_room * small_rooms) + (price_per_large_room * large_rooms) << std::endl
        << "Tax: $" << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax << std::endl
        << "===============================" << std::endl
        << "Total estimate: $" << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) +
        (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax) << std::endl
        << "This estimate is valid for " << estimate_expiry << " days" << std::endl << std::endl;

    return 0;
}
