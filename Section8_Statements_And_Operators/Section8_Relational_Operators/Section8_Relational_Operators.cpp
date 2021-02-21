// Section 8.
// Relational Operators.
#include <iostream>
using namespace std;

int main()
{
	int Num1{ }, Num2{ };

	cout << boolalpha;
	cout << "Enter 2 integers separated by a space: ";
	cin >> Num1 >> Num2;

	cout << Num1 << " > " << Num2 << " : " << (Num1 > Num2) << endl; // Num1 greater than Num2.
	cout << Num1 << " >= " << Num2 << " : " << (Num1 >= Num2) << endl; // Num1 greater than or equal to Num2.
	cout << Num1 << " < " << Num2 << " : " << (Num1 < Num2) << endl; // Num1 less than Num2.
	cout << Num1 << " <= " << Num2 << " : " << (Num1 <= Num2) << endl << endl; // Num1 less than or equal to Num2.


	const int Lower{ 10 }, Upper{ 20 };
	cout << "Enter an integer that is greater than " << Lower << ": ";
	cin >> Num1;
	cout << Num1 << " <= " << Upper << " is " << (Num1 <= Upper) << endl; // Num1 less than or equal to Upper.

	cout << endl;
	return 0;
}
