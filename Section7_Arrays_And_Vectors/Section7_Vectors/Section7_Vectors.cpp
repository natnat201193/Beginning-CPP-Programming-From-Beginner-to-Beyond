// Section 7.
// Vectors.
#include <iostream>
#include <vector> // Don't forget this in order to use vectors.
using namespace std;

int main()
{
	cout << "\n****************************\n\n";

	//vector <char> Vowels; // empty.
	//vector <char> Vowels(5); // 5 elements automatically initialized to 0.
	vector <char> Vowels{ 'a','e','i','o','u' };
	cout << Vowels[0] << endl;
	cout << Vowels[4] << endl << endl;

	//vector <int> TestScores(3); // 3 elements automatically initialized to 0.
	//vector <int> TestScores(3, 100); // 3 elements all initialized to 100.
	vector <int> TestScores{ 100, 98, 89 };
	cout << "Test scores using array syntax: " << endl;
	cout << TestScores[0] << endl;
	cout << TestScores[1] << endl;
	cout << TestScores[2] << endl << endl;

	cout << "Test scores using vector syntax: " << endl;
	cout << TestScores.at(0) << endl;
	cout << TestScores.at(1) << endl;
	cout << TestScores.at(2) << endl;
	cout << "There are " << TestScores.size() << " scores in the vector" << endl << endl;

	cout << "Enter 3 test scores: ";
	cin >> TestScores.at(0);
	cin >> TestScores.at(1);
	cin >> TestScores.at(2);
	cout << endl << "Updated test scores: " << endl;
	cout << TestScores.at(0) << endl;
	cout << TestScores.at(1) << endl;
	cout << TestScores.at(2) << endl << endl;

	cout << "Enter a test score to add to the vector: ";
	int ScoreToAdd{ 0 };
	cin >> ScoreToAdd;
	TestScores.push_back(ScoreToAdd);
	cout << "Enter one more test score to add to the vector: ";
	cin >> ScoreToAdd;
	TestScores.push_back(ScoreToAdd);
	cout << endl << "The test scores are now: " << endl;
	cout << TestScores.at(0) << endl;
	cout << TestScores.at(1) << endl;
	cout << TestScores.at(2) << endl;
	cout << TestScores.at(3) << endl;
	cout << TestScores.at(4) << endl << endl;

	cout << "There are now " << TestScores.size() << " scores in the vector" << endl << endl;
	//cout << "This should cause an exception!!" << TestScores.at(10); // out of bounds.

	// Example of a 2 dimensional vector.
	vector <vector<int>> MovieRatings
	{
		{1, 2, 3, 4},
		{1, 2, 3, 4},
		{1, 3, 4, 5}
	};

	cout << "Here are the movie ratings for reviewer #1 using array syntax: " << endl;
	cout << MovieRatings[0][0] << endl;
	cout << MovieRatings[0][1] << endl;
	cout << MovieRatings[0][2] << endl;
	cout << MovieRatings[0][3] << endl << endl;

	cout << "Here are the movie ratings for reviewer #1 using vector syntax: " << endl;
	cout << MovieRatings.at(0).at(0) << endl;
	cout << MovieRatings.at(0).at(1) << endl;
	cout << MovieRatings.at(0).at(2) << endl;
	cout << MovieRatings.at(0).at(3) << endl;

	cout << "\n\n****************************\n\n";
	return 0;
}
