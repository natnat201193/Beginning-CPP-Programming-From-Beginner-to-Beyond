// Arrays.
#include <iostream>
using namespace std;

int main()
{
    cout << "\n****************************\n\n";

    char Vowels[]{ 'a','e','i','o','u' };
    cout << "The first vowel is: " << Vowels[0] << endl;
    cout << "The last vowel is: " << Vowels[4] << endl << endl;
    //cin >> Vowels[5]; // Out of bounds, will crash.

    double HiTemps[]{ 90.1, 89.8, 77.5, 81.6 };
    cout << "The first high temperature is: " << HiTemps[0] << endl;
    HiTemps[0] = { 100.7 }; // Set the first element in HiTemps to 100.7.
    cout << "The first high temperature is now: " << HiTemps[0] << endl << endl;

    int TestScores[]{ 100, 90, 80, 70, 60 };
    cout << "First score at index 0: " << TestScores[0] << endl;
    cout << "Second score at index 1: " << TestScores[1] << endl;
    cout << "Third score at index 2: " << TestScores[2] << endl;
    cout << "Fourth score at index 3: " << TestScores[3] << endl;
    cout << "Fifth score at index 4: " << TestScores[4] << endl;
    cout << "Enter 5 test scores: ";
    cin >> TestScores[0];
    cin >> TestScores[1];
    cin >> TestScores[2];
    cin >> TestScores[3];
    cin >> TestScores[4];
    cout << "The updated array is: " << endl;
    cout << "First score at index 0: " << TestScores[0] << endl;
    cout << "Second score at index 1: " << TestScores[1] << endl;
    cout << "Third score at index 2: " << TestScores[2] << endl;
    cout << "Fourth score at index 3: " << TestScores[3] << endl;
    cout << "Fifth score at index 4: " << TestScores[4] << endl << endl;

    cout << "Notice what the value of the array name is: " << TestScores << endl; // Name is the memory address for the array.

    cout << "\n\n****************************\n\n";
    return 0;
}
