#include <iostream>

int main()
{
    int FavoriteNumber = 0;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> FavoriteNumber;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << FavoriteNumber << " is my favorite number!" << std::endl;

    return 0;
}
