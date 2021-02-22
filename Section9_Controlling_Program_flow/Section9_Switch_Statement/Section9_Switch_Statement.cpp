// Section 9.
// Switch statement.

// Ask the user what grade they expect on an exam and tell them what they need to score to get it.

#include <iostream>
using namespace std;

int main()
{
	char LetterGrade{ };

	cout << "Enter the letter grade you expect on the exam: ";
	cin >> LetterGrade;

	switch (LetterGrade)
	{
		case 'a':
		case 'A':
			cout << "You need a 90 or above to achieve grade: " << LetterGrade << "." << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need a 80-89 to achieve grade: " << LetterGrade << "." << endl;
			break;
		case 'c':
		case 'C':
			cout << "You need a 70-79 to achieve grade: " << LetterGrade << "." << endl;
			break;
		case 'd':
		case 'D':
			cout << "You need a 60-69 to achieve grade: " << LetterGrade << "." << endl;
			break;
		case 'f':
		case 'F':
		{
			char Confirm{ };
			cout << "Are you sure (Y/N)? ";
			cin >>Confirm;
			if (Confirm == 'y' || Confirm == 'Y')
				cout << "Ok, I guess you didn't study...." << endl;
			else if (Confirm == 'n' || Confirm == 'N')
				cout << "Good, go study!" << endl;
			else
				cout << "invalid choice entered." << endl;
			break;
		}
		default:
			cout << "Sorry, that's not a valid grade." << endl;
	}

	cout << endl;
	return 0;
}
