// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

    /* Challenge

    Write a C++ program as follows:

    Declare 2 empty vectors of integers named
    Vector1 and Vector2, respectively.

    Add 10 and 20 to Vector1 dynamically using push_back
    Display the elements in Vector1 using the at() method as well as its size using the size() method

    Add 100 and 200 to Vector2 dynamically using push_back
    Display the elements in Vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called Vector2D
    Remember, that a 2D vector is a vector of vector<int>

    Add Vector1 to Vector2D dynamically using push_back
    Add Vector2 to Vector2D dynamically using push_back

    Display the elements in Vector2D using the at() method

    Change Vector1.at(0) to 1000

    Display the elements in Vector2D again using the at() method

    Display the elements in Vector1  */

#include <iostream>
#include <vector>

int main() 
{
    // Declare 2 empty vectors of integers named Vector1 and Vector2.
    std::vector <int> Vector1, Vector2;

    // Add 10 and 20 to Vector1 dynamically using push_back
    Vector1.push_back(10);
    Vector1.push_back(20);

    // Display the elements in Vector1 using the at() method as well as its size using the size() method
    std::cout 
        << std::endl 
        << "Vector1: " << std::endl
        << Vector1.at(0) << std::endl
        << Vector1.at(1) << std::endl
        << "Vector1 contains " << Vector1.size() << " elements" << std::endl;

    // Add 100 and 200 to Vector2 dynamically using push_back
    Vector2.push_back(100);
    Vector2.push_back(200);

    // Display the elements in Vector2 using the at() method as well as its size using the size() method
    std::cout 
        << std::endl 
        << "Vector2: " << std::endl
        << Vector2.at(0) << std::endl
        << Vector2.at(1) << std::endl
        << "Vector2 contains " << Vector2.size() << " elements" << std::endl;

    // Declare an empty 2D vector called Vector2D
    // Remember, that a 2D vector is a vector of vector<int>
    std::vector <std::vector<int>> Vector2D;

    // Add Vector1 to Vector2D dynamically using push_back
    // Add Vector2 to Vector2D dynamically using push_back
    Vector2D.push_back(Vector1);
    Vector2D.push_back(Vector2);

    // Display the elements in Vector2D using the at() method
    std::cout 
        << std::endl 
        << "Vector2D:" << std::endl
        << Vector2D.at(0).at(0) << "  " << Vector2D.at(0).at(1) << std::endl
        << Vector2D.at(1).at(0) << "  " << Vector2D.at(1).at(1) << std::endl;

    // Change Vector1.at(0) to 1000
    Vector1.at(0) = 1000;

    // Display the elements in Vector2D again using the at() method
    std::cout 
        << std::endl 
        << "Vector2D:" << std::endl
        << Vector2D.at(0).at(0) << "  " << Vector2D.at(0).at(1) << std::endl
        << Vector2D.at(1).at(0) << "  " << Vector2D.at(1).at(1) << std::endl;

    // Display the elements in Vector1 
    std::cout 
        << std::endl 
        << "Vector1: " << std::endl
        << Vector1.at(0) << std::endl
        << Vector1.at(1) << std::endl
        << "Vector1 contains " << Vector1.size() << " elements" << std::endl;

    std::cout << std::endl;

    return 0;
}
