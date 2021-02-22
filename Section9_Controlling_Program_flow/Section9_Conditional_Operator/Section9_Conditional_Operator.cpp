// Section 9.
// Conditional Operator.
#include <iostream>
using namespace std;

int main()
{
	cout << "******** Example 1. ********" << endl;
	int Num{ };
	cout << "Enter an integer: ";
	cin >> Num;
	cout << "***** Using an if/else statement. *****" << endl;

	if (Num % 2 == 0)
		cout << Num << " is an even number." << endl << endl;
	else
		cout << Num << " is an odd number." << endl << endl;

	cout << "***** Using a conditional operator. *****" << endl;
	cout << Num << " is an" << ((Num % 2 == 0) ? " even" : " odd") << " number." << endl << endl;


	cout << endl << "******** Example 2. ********" << endl;
	int Num2{ }, Num3{ };
	cout << "Enter two integers separated by a space: ";
	cin >> Num2 >> Num3;
	cout << "***** Using an if/else statement and a conditional operator. *****" << endl;

	if (Num2 != Num3)
	{
		cout << "Largest: " << ((Num2 > Num3) ? Num2 : Num3) << endl;
		cout << "Smallest: " << ((Num2 < Num3) ? Num2 : Num3) << endl;
	}
	else
		cout << Num2 << " and " << Num3 << " are the same." << endl;

	cout << endl;
	return 0;
}
