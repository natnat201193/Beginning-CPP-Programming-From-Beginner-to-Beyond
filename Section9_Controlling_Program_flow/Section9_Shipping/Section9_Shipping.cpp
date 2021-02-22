// Section 9.
// Shipping.
/*
	Shipping cost calculator.

	Ask the user for package dimension in inches,
	length, width, height - these should be integers.

	All dimensions must be 10 inches or less or we cannot ship it.

	Base cost $2.50
	If package volume is greater than 100 cubic inches these is a 10% surcharge.
	If package value is greater than 500 cubic inches, there is a 25% surcharge.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Length{ }, Width{ }, Height{ };
	double BaseCost{ 2.50 };

	const int Tier1Threshold{ 100 }; // Volume.
	const int Tier2Threshold{ 500 }; // Volume.

	int MaxDimensionLength{ 10 }; // Inches.

	double Tier1Surcharge{ 0.10 }; // 10% extra.
	double Tier2Surcharge{ 0.25 }; // 25% extra.

	// All dimensions must be 10 inches or less.

	int PackageVolume{ };

	cout << "Welcome to the package cost calculator." << endl;
	cout << "Enter the length, width and height of the package separated by spaces: ";
	cin >> Length >> Width >> Height;

	if (Length > MaxDimensionLength || Width > MaxDimensionLength || Height > MaxDimensionLength)
	{
		cout << "Sorry, package rejected - dimensions exceeded." << endl;
	}
	else
	{
		double PackageCost{ };
		PackageVolume = { Length * Width * Height };
		PackageCost = { BaseCost };

		if (PackageVolume > Tier2Threshold)
		{
			PackageCost = { PackageCost + (PackageCost * Tier2Surcharge) };
		}
		else if (PackageVolume > Tier1Threshold)
		{
			PackageCost = { PackageCost + (PackageCost * Tier1Surcharge) };
		}

		cout << fixed << setprecision(2); // Limits decimal point printing to 2. // Requires: #include <iomanip>
		cout << "The volume of your package is: " << PackageVolume << endl;
		cout << "Your package will cost $" << PackageCost << " to ship."<< endl;
	}

	cout << endl;
	return 0;
}
