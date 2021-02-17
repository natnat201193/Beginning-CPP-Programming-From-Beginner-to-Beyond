#include <iostream>
using namespace std;

int main()
{
    // This program will calculate the area of a room in square feet.

    cout << "Please enter the width of the room in feet: ";
    int RoomWidth{ 0 };
    cin >> RoomWidth;
    cout << "Please enter the Length of the room in feet: ";
    int RoomLength{ 0 };
    cin >> RoomLength;
    cout << "The area of the room is " << RoomWidth * RoomLength << " square feet." << endl;

    return 0;
}
