// Section 9.
// While Loop.
#include <iostream>
using namespace std;

int main()
{
	cout << "While loop for counting down." << endl;
	int Num{ };
	cout << "Enter a positive integer - start the countdown: ";
	cin >> Num;
	while (Num > 0)
	{
		cout << Num << endl;
		--Num;
	}
	cout << "Blastoff!" << endl << endl;


	cout << "While loop for counting up." << endl;
	int Num2{ }, i{ 1 };
	cout << "Enter a positive integer to count up to: ";
	cin >> Num2;
	while (Num2 >= i)
	{
		cout << i << endl;
		i++;
	}
	cout << endl << endl;


	cout << "input validation - While loop using int." << endl;
	int Number{ };
	cout << "Enter an integer less than 100: ";
	cin >> Number;
	while (Number >= 100)
	{
		cout << "Enter an integer less than 100: ";
		cin >> Number;
	}
	cout << "Thanks." << endl;
	cout << endl << endl;


	cout << "Input validation - While loop using a bool." << endl;
	bool Done{ false };
	int Number2{ 0 };
	while (!Done)
	{
		cout << "Enter an integer between 1 and 5: ";
		cin >> Number2;
		if ((Number2 <= 1) || (Number2 >= 5))
			cout << "Out of range, try again." << endl;
		else
		{
			cout << "Thanks!" << endl;
			Done = true;
		}
	}
	cout << endl << endl;

	return 0;
}
