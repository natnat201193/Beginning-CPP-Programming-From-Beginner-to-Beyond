// Section 9.
// Grades.
#include <iostream>
using namespace std;

int main()
{
	int Score{ };
	cout << "Enter your score on the exam (0-100): ";
	cin >> Score;
	char LetterGrade{ };
	
	if(Score >= 0 && Score <=100)
	{
		if (Score >= 90)
			LetterGrade = 'A';
		else if (Score >= 80)
			LetterGrade = 'B';
		else if (Score >= 70)
			LetterGrade = 'C';
		else if (Score >= 60)
			LetterGrade = 'D';
		else
			LetterGrade = 'F';
		cout << "Your grade is: "<< LetterGrade << "." << endl;

		if (LetterGrade == 'F')
			cout << "Sorry, you must repeat this class." << endl;
		else
			cout << "Congrats, thats a passing grade!" << endl;
	}
	else
	{
		cout << "Sorry, " << Score << " is not in range." << endl;
	}

	cout << endl;
	return 0;
}
