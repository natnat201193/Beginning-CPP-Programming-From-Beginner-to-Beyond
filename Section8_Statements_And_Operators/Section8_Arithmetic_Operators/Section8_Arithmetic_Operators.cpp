// Section 8.
// Arithmetic Operators.

/*
	+ Addition.
	- Subtraction.
	* Multiplication.
	/ Division.
	% Modulo or Remainder (works only with integers).

	+, -, * and / Operators are overloaded to work with multiple types such as int, double, etc.
	% Only for integer types.
*/

#include <iostream>
using namespace std;

int main()
{
	int Num1{ 200 };
	int Num2{ 100 };

	cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

	int Result{ 0 };
	Result = { Num1 + Num2 };
	cout << Num1 << " + " << Num2 << " = " << Result << endl;

	Result = { Num1 - Num2 };
	cout << Num1 << " - " << Num2 << " = " << Result << endl;

	Result = { Num1 * Num2 };
	cout << Num1 << " * " << Num2 << " = " << Result << endl;

	Result = { Num1 / Num2 };
	cout << Num1 << " / " << Num2 << " = " << Result << endl;

	Result = { Num2 / Num1 }; // 0, Should be 0.5, but that does not work unless using double or float types.
	cout << Num2 << " / " << Num1 << " = " << Result << endl;

	Result = { Num1 % Num2 }; // 2 remainder 0, only the remainder will be output.
	cout << Num1 << " % " << Num2 << " = " << Result << endl << endl;

	Num1 = { 10 };
	Num2 = { 3 };

	Result = { Num1 % Num2 }; // 3 remainder 1.
	cout << Num1 << " % " << Num2 << " = " << Result << endl;

	Result = { Num1 * 10 + Num2 }; // (10x10) + 3 = 103.
	cout << Num1 << " * 10 + " << Num2 << " = " << Result << endl << endl;

	cout << "int 5/10 = " << 5 / 10 << endl;

	cout << "double 5.0/10.0 = " << 5.0 / 10.0 << endl;

	cout << endl;
	return 0;
}
