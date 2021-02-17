// Section 6.
// Challenge.
#include <iostream>
using namespace std;

/*
    Frank's Carpet Cleaning Service.
    Charges:
    $25 per small room.
    $35 per large room.
    Sales tax rate is 6%.
    Estimates are valid for 30 days.

    Promp the user for the number of small and large rooms they would like cleaned and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of small rooms: 2
    Number of large rooms: 1
    Price per small room: $25
    Price per large room: $35
    Cost: $110
    Tax: $6.6

    ======================================================================
    Total estimate: $116.6
    This estimate is valid for 30 days.


    Pseudocode:
    Prompt the user to enter the number of rooms.
    Display the number of rooms.
    Display the price per room.

    Display cost: (number of rooms * price per room)
    Display tax: number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time.
*/

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service.";
    cout << "\n=========================================================\n";
    cout << "How many small rooms would you like cleaned? ";
    int NumberOfSmallRooms{ 0 };
    cin >> NumberOfSmallRooms;
    cout << "How many large rooms would you like cleaned? ";
    int NumberOfLargeRooms{ 0 };
    cin >> NumberOfLargeRooms;

    const double PricePerSmallRoom{ 25.0 }, PricePerLargeRoom{ 35.0 }, SalesTax{ 0.06 };
    const int EstimateExpiry{ 30 }; // Days.

    cout << "\nEstimate for carpet cleaning service: \n";
    cout << "Number of small rooms: " << NumberOfSmallRooms << endl;
    cout << "Number of large rooms: " << NumberOfLargeRooms << endl;
    cout << "Price per small room: $" << PricePerSmallRoom << endl;
    cout << "Price per large room: $" << PricePerLargeRoom << endl;
    cout << "Cost: $" << ((PricePerSmallRoom * NumberOfSmallRooms) + (PricePerLargeRoom * NumberOfLargeRooms)) << endl;
    cout << "Sales tax: $" << (((PricePerSmallRoom * NumberOfSmallRooms) + (PricePerLargeRoom * NumberOfLargeRooms)) * SalesTax) << endl;
    cout << "\n=========================================================\n";
    cout << "Total estimate: $" 
         << (((PricePerSmallRoom * NumberOfSmallRooms) + (PricePerLargeRoom * NumberOfLargeRooms)) + 
            (((PricePerSmallRoom * NumberOfSmallRooms) + (PricePerLargeRoom * NumberOfLargeRooms)) * SalesTax)) 
         << endl;
    cout << "This estimate is valid for " << EstimateExpiry << " days.\n";

    cout << endl;
    return 0;
}