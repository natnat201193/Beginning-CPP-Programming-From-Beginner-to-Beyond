// Section 5
// Basic I/O using cin and cout

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Hello";
    cout << "World" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello" << " World!" << endl;
    cout << "Hello" << " World!\n";
    cout << "Hello\nOut\nThere\n";

    int Num1;
    int Num2;
    double Num3;


    cout << "\n*****************************\n\n";
    cout << "Enter an integer: ";
    cin >> Num1;
    cout << "You entered: " << Num1 << endl;


    cout << "\n*****************************\n\n";
    cout << "Enter a first integer: ";
    cin >> Num1;
    cout << "Enter a second integer: ";
    cin >> Num2;
    cout << "You entered " << Num1 << " and " << Num2 << endl;


    cout << "\n*****************************\n\n";
    cout << "Enter two integers separated by a space: ";
    cin >> Num1 >> Num2;
    cout << "You entered " << Num1 << " and " << Num2 << endl;


    cout << "\n*****************************\n\n";
    cout << "Enter a double: ";
    cin >> Num3;
    cout << "You entered: " << Num3 << endl;


    cout << "\n*****************************\n\n";
    cout << "Enter an integer: ";
    cin >> Num1;
    cout << "Enter a double: ";
    cin >> Num3;
    cout << "The integer is: " << Num1 << endl;
    cout << "The double is: " << Num3 << endl;

    return 0;
}
