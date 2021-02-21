// Section 8.
// Logical Operators.
#include <iostream>
using namespace std;

int main()
{
	int Num{ };
	const int Lower{ 10 }, Upper{ 20 };
	cout << boolalpha;

	// Determine if an entered integer is between two other integers.
	cout << "Determine if an entered integer is between two other integers." << endl;
	// Assume Lower < Upper.
	cout << "Enter an integer - the bounds are " << Lower << " and " << Upper << ": ";
	cin >> Num;
	bool WithinBounds{ false };
	WithinBounds = { (Num > Lower && Num < Upper) }; // Num greater than Lower AND Num less than Upper.
	cout << Num << " is between " << Lower << " and " << Upper << ": " << WithinBounds << endl << endl;


	// Determine if an entered integer is outside two other integers.
	cout << "Determine if an entered integer is outside two other integers." << endl;
	// Assume Lower < Upper.
	cout << "Enter an integer - the bounds are " << Lower << " and " << Upper << ": ";
	cin >> Num;
	bool OutsideBounds{ false };
	OutsideBounds = { (Num < Lower || Num > Upper) }; // Num less than Lower OR Num greater than Upper.
	cout << Num << " is outside " << Lower << " and " << Upper << ": " << OutsideBounds << endl << endl;


	// Determine if an entered integer is exactly on the boundary.
	cout << "Determine if an entered integer is exactly on the boundary." << endl;
	// Assume Lower < Upper.
	cout << "Enter an integer - the bounds are " << Lower << " and " << Upper << ": ";
	cin >> Num;
	bool OnBounds{ false };
	OnBounds = { (Num == Lower || Num == Upper) }; // Num equal to Lower OR Num equal to Upper;
	cout << Num << " is on one of the bounds which are " << Lower << " and " << Upper << ": " << OnBounds << endl << endl;


	// Determine if you need to wear a coat based on the temperature and wind speed.
	cout << "Determine if you need to wear a coat based on the temperature and wind speed." << endl;
	bool WearCoat{ false };
	double Temperature{ };
	int WindSpeed{ };
	const int WindSpeedForCoat{ 25 }; // Wind over this value requires a coat.
	const double TemperatureForCoat{ 45.0 }; // Temperature below this value requires a coat.
	// Require a coat if either the wind speed is too high OR the temperature is too low.
	cout << "Enter the current temperature in (f): ";
	cin >> Temperature;
	cout << "Enter wind speed in (MPH): ";
	cin >> WindSpeed;
	WearCoat = { (Temperature < TemperatureForCoat || WindSpeed > WindSpeedForCoat) }; // Temperature less than TemperatureForCoat OR WindSpeed greater than WindSpeedForCoat.
	cout << "Do you need to wear a coat using OR? " << WearCoat << endl;
	// Require a coat if BOTH the wind speed is too high AND the temperature is too low.
	WearCoat = { (Temperature < TemperatureForCoat && WindSpeed > WindSpeedForCoat) }; // Temperature less than TemperatureForCoat AND WindSpeed greater than WindSpeedForCoat.
	cout << "Do you need to wear a coat using AND? " << WearCoat << endl;


	cout << endl;
	return 0;
}
