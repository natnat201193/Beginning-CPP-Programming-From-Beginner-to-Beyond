// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// Section 8.
// Mixed Type Expressions.
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers, then calculate the average of the 3 integers.

    Display the 3 integers entered, the sum of the 3 integers and the average of the 3 integers.
*/

#include <iostream>
using namespace std;

int main()
{
    int Total{ };
    int Num1{ }, Num2{ }, Num3{ };
    const int Count{ 3 };

    cout << "Please enter 3 integers separated by spaces: ";
    cin >> Num1 >> Num2 >> Num3;

    Total = { Num1 + Num2 + Num3 };

    double Average{ };

    Average = { static_cast<double>(Total) / Count }; // Converts Total from int to double, then divides it by Count and assigns it to Average.

    //Average = (double)Total / Count; // Old C-Style cast, Don't use! 
    //The new "static_cast<type>(VariableName)" double checks that the type can be converted first.

    cout << "The 3 numbers where: " << Num1 << ", " << Num2 << ", "<< Num3 << endl;
    cout << "The sum of the numbers is: " << Total << endl;
    cout << "The average of the numbers is: " << Average << endl;

    cout << endl;
    return 0;
}
