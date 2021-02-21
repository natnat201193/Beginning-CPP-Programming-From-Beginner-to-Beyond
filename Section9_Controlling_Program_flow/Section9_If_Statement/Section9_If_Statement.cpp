// Section 9.
// If statement.
#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;

	int Num{ };
	const int Min{ 10 };
	const int Max{ 100 };

	cout << "Enter a number between or equal to " << Min << " and/or " << Max << ": ";
	cin >> Num;

	if (Num >= Min)
	{
		cout << "\n========== If statement 1 ==========" << endl;
		cout << Num << " is greater than or equal to " << Min << endl;

		int Difference{ Num - Min };
		cout << Num << " is " << Difference << " greater than " << Min << endl;

	}

	if (Num <= Max)
	{
		cout << "\n========== If statement 2 ==========" << endl;
		cout << Num << " is less than or or equal to " << Max << endl;

		int Difference{ Max - Num };
		cout << Num << " is " << Difference << " less than " << Max << endl;
	}

	if (Num >= Min && Num <= Max)
	{
		cout << "\n========== If statement 3 ==========" << endl;
		cout << Num << " is within range " << Min << " to " << Max << endl;

		int Difference{ Num - Min };
		int Difference2{ Max - Num };
		cout << Num << " is " << Difference << " greater than " << Min << endl;
		cout << Num << " is " << Difference2 << " less than " << Max << endl;
		cout << "This means statements 1 and 2 must also display." << endl;
	}

	if (Num == Min || Num == Max)
	{
		cout << "\n========== If statement 4 ==========" << endl;
		cout << Num << " is equal to " << Min << ": " << (Num == Min) << endl;
		cout << Num << " is equal to " << Max << ": " << (Num == Max) << endl;
		cout << "This means statements 1, 2 and 3 must also display." << endl;
	}

	cout << endl;
	return 0;
}
