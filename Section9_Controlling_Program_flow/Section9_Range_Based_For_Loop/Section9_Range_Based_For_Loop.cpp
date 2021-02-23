// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// Section 9.
// Range-based For Loop.
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Range based for loop with an array." << endl;
	int Scores[]{ 10, 20, 30 };
	for (int Score : Scores)
		cout << Score << endl;


	cout << endl << endl << "Range based for loop with a vector." << endl;
	vector <double> Temperatures{ 87.9, 77.9, 80.0, 72.5 };
	double AverageTemp{ }, Total{ };
	for (auto Temperature : Temperatures)
		Total += Temperature;
	if (Temperatures.size() != 0)
		AverageTemp = { Total / Temperatures.size() };
	cout << fixed << setprecision(1);
	cout << "Average Temprature is " << AverageTemp << endl;


	cout << endl << endl << "Range based for loop with an initializer list." << endl;
	for (auto Val : { 1, 2, 3, 4, 5 })
		cout << Val << endl;


	cout << endl << endl << "Range based for loop with a string." << endl;
	for (auto C : "This is a test.")
		if (C == ' ')
			cout << "\t";
		else
			cout << C;

	cout << endl;
	return 0;
}
