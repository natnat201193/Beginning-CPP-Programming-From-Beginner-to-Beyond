// Section 8.
// Convert EUR to USD.

#include <iostream>
using namespace std;

int main()
{
	const double USDPerEURO{ 1.19 };

	cout << "Welcome to the EUR to USD converter." << endl;
	cout << "Enter the value to convert in euros: ";
	
	double Euros{ 0.0 };
	double Dollars{ 0.0 };
	cin >> Euros;

	Dollars = { Euros * USDPerEURO };

	cout << Euros << " Euros is equivalent to " << Dollars << " Dollars." << endl;

	cout << endl;
	return 0;
}
