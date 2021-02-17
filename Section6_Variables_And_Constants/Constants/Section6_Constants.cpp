// Section 6.
// Constants.
#include <iostream>
using namespace std;

/*
    Frank's Carpet Cleaning Service.
    Charges $30 per room.
    Sales tax rate is 6%.
    Estimates are valid for 30 days.

    Promp the user for the number of rooms they would like cleaned and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost: $60
    Tax: $3.6

    ======================================================================
    Total estimate: $63.6
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
    cout << "How many rooms would you like cleaned? ";
    int NumberOfRooms{ 0 };
    cin >> NumberOfRooms;

    const double PricePerRoom{ 30.0 }, SalesTax{ 0.06 };
    const int EstimateExpiry{ 30 }; // Days.

    cout << "\nEstimate for carpet cleaning service: \n";
    cout << "Number of rooms: " << NumberOfRooms << endl;
    cout << "Price per room: $" << PricePerRoom << endl;
    cout << "Cost: $" << (PricePerRoom * NumberOfRooms) << endl;
    cout << "Sales tax: $" << (PricePerRoom * NumberOfRooms * SalesTax) << endl;
    cout << "\n=========================================================\n";
    cout << "Total estimate: $" << ((PricePerRoom * NumberOfRooms) + (PricePerRoom * NumberOfRooms * SalesTax)) << endl;
    cout << "This estimate is valid for " << EstimateExpiry << " days.\n";

    cout << endl;
    return 0;
}
