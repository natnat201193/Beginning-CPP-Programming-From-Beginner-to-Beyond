#include <iostream>
using namespace std;

int main()
{
	int Num1{ 10 }; // not assignment, this is initialization.
	int Num2{ 20 };

	//Num1 = { 100 }; // assignment statement.
	//Num1 = { Num2 };
	//Num1 = Num2 = { 1000 }; // Will assign 1000 to both variables.

	//int Num3{ 0 };
	//Num3 = "Frank"; // Error, can't store different types together. This example: can't store a string in to an int.

	//const int Num4{ 0 };
	//Num4 = { 10 }; // Error, a const value is read only once initialized, cannot be changed.

	//100 = { Num1 }; // Error,  Wrong way around, right side values are stored in the left side variable.

	cout << "Num1 is " << Num1 << endl;
	cout << "Num2 is " << Num2 << endl;

	cout << endl;
	return 0;
}
