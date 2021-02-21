#include <iostream>
using namespace std;

int main()
{
	bool EqualResult{ false };
	bool NotEqualResult{ false };

	cout << boolalpha; // will enable the display of true/false instead of 1/0 for booleans.
	//cout << noboolalpha; // will disable the display of true/false instead of 1/0 for booleans.

	int Num1{ }, Num2{ };
	cout << "Enter two integers separated by a space: ";
	cin >> Num1 >> Num2;
	EqualResult = { (Num1 == Num2) };
	NotEqualResult = { (Num1 != Num2) };
	cout << "Comparison result (equals): " << EqualResult << endl;
	cout << "Comparison result (not equals): " << NotEqualResult << endl << endl;

	char Char1{ }, Char2{ };
	cout << "Enter two characters separated by a space: ";
	cin >> Char1 >> Char2;
	EqualResult = { (Char1 == Char2) };
	NotEqualResult = { (Char1 != Char2) };
	cout << "Comparison result (equals): " << EqualResult << endl;
	cout << "Comparison result (not equals): " << NotEqualResult << endl << endl;

	double Double1{ }, Double2{ };
	cout << "Enter two doubles separated by a space: ";
	cin >> Double1 >> Double2;
	EqualResult = { (Double1 == Double2) };
	NotEqualResult = { (Double1 != Double2) };
	cout << "Comparison result (equals): " << EqualResult << endl;
	cout << "Comparison result (not equals): " << NotEqualResult << endl << endl;

	int Num3{ }; 
	double Double3{ };
	cout << "Enter an integer and a double separated by a space: ";
	cin >> Num3 >> Double3;
	EqualResult = { (Num3 == Double3) };
	NotEqualResult = { (Num3 != Double3) };
	cout << "Comparison result (equals): " << EqualResult << endl;
	cout << "Comparison result (not equals): " << NotEqualResult << endl << endl;

	cout << endl;
	return 0;
}
