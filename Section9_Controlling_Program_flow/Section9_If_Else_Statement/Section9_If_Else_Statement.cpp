#include <iostream>
using namespace std;

int main()
{
	int Num{ };
	const int Target{ 10 };

	cout << "Enter a number and I'll compare it to " << Target << ": ";
	cin >> Num;

	if (Num >= Target)
	{
		cout << "\n====================================" << endl;
		cout << Num << " is greater than or equal to " << Target << endl;
		int Difference{ Num - Target };
		cout << Num << " is " << Difference << " greater than " << Target << endl;
	}
	else
	{
		cout << "\n====================================" << endl;
		cout << Num << " is less than " << Target << endl;
		int Difference{ Target - Num };
		cout << Num << " is " << Difference << " less than " << Target << endl;
	}

	cout << endl;
	return 0;
}
