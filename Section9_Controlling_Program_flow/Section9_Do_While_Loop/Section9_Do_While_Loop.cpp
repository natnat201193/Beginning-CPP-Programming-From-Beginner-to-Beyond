// Section 9.
// Do-While Loop.
// Simple Menu Example.
#include <iostream>
using namespace std;

int main()
{
	char Selection{ };

	do
	{
		cout << endl << "----- MENU. -----" << endl;
		cout << "1. Do this." << endl;
		cout << "2. Do that." << endl;
		cout << "3. Do something else." << endl;
		cout << "Q. Quit." << endl;
		cout << endl << "Enter your selection: ";
		cin >> Selection;

		switch (Selection)
		{
			case '1': cout << "You Chose: " << Selection << ". Do this." << endl; break;
			case '2': cout << "You Chose: " << Selection << ". Do that." << endl; break;
			case '3': cout << "You Chose: " << Selection << ". Do something else." << endl; break;
			case 'q':
			case 'Q': cout << "You Chose: Q. Quit." << endl; break;
			default: cout << "Invalid Selection!" << endl;
		}

		//if (Selection == '1')
		//	cout << "You Chose: " << Selection << ". Do this." << endl;
		//else if (Selection == '2')
		//	cout << "You Chose: " << Selection << ". Do that." << endl;
		//else if (Selection == '3')
		//	cout << "You Chose: " << Selection << ". Do something else." << endl;
		//else if (Selection == 'q' || Selection == 'Q')
		//	cout << "You Chose: Q. Quit." << endl;
		//else
		//	cout << "Invalid Selection!" << endl;

	} 
	while (Selection != 'q' && Selection != 'Q');











	cout << endl;
	return 0;
}
