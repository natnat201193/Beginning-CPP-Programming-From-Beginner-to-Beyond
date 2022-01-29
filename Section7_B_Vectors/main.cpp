// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
#include <vector>

int main()
{
    //std::vector <char> Vowels;         // empty 
    //std::vector <char> Vowels (5);      // 5 initialized to zero 
    std::vector <char> Vowels{ 'a' , 'e', 'i', 'o', 'u' };

    std::cout 
        << Vowels[0] << std::endl
        << Vowels[4] << std::endl << std::endl;

    //std::vector <int> TestScores (3);  // 3 elements all initialized to zero
    //std::vector <int> TestScores (3, 100); // 3 elements all initialized to 100

    std::vector <int> TestScores{ 100, 98, 89 };

    std::cout 
        << "Test scores using array syntax:" << std::endl
        << TestScores[0] << std::endl
        << TestScores[1] << std::endl
        << TestScores[2] << std::endl << std::endl;

    std::cout 
        << "Test scores using std::vector syntax:" << std::endl
        << TestScores.at(0) << std::endl
        << TestScores.at(1) << std::endl
        << TestScores.at(2) << std::endl << std::endl
        << "There are " << TestScores.size() << " scores in the std::vector" << std::endl << std::endl;

    std::cout 
        << "Enter 3 test scores separated by spaces: ";
    std::cin 
        >> TestScores.at(0)
        >> TestScores.at(1)
        >> TestScores.at(2);

    std::cout 
        << std::endl 
        << "Updated test scores: " << std::endl
        << TestScores.at(0) << std::endl
        << TestScores.at(1) << std::endl
        << TestScores.at(2) << std::endl << std::endl;

    std::cout 
        << "Enter a test score to add to the std::vector: ";

    int ScoreToAdd{ 0 };
    std::cin >> ScoreToAdd;

    TestScores.push_back(ScoreToAdd);

    std::cout 
        << std::endl 
        << "Enter one more test score to add to the std::vector: ";

    std::cin >> ScoreToAdd;

    TestScores.push_back(ScoreToAdd);

    std::cout 
        << std::endl 
        << "Test scores are now: " << std::endl;

    std::cout 
        << TestScores.at(0) << std::endl
        << TestScores.at(1) << std::endl
        << TestScores.at(2) << std::endl
        << TestScores.at(3) << std::endl
        << TestScores.at(4) << std::endl;

    std::cout 
        << std::endl 
        << "There are now " << TestScores.size() << " scores in the std::vector" << std::endl;

    //std::cout << "This should cause an exception!!" << TestScores.at(10) << std::endl;

    // Example of a 2D-std::vector
    std::vector <std::vector<int>> MovieRatings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    std::cout 
        << std::endl 
        << "Here are the movie rating for reviewer #1 using array syntax :" << std::endl
        << MovieRatings[0][0] << std::endl
        << MovieRatings[0][1] << std::endl
        << MovieRatings[0][2] << std::endl
        << MovieRatings[0][3] << std::endl;

    std::cout 
        << std::endl 
        << "Here are the movie rating for reviewer #1 using std::vector syntax :" << std::endl
        << MovieRatings.at(0).at(0) << std::endl
        << MovieRatings.at(0).at(1) << std::endl
        << MovieRatings.at(0).at(2) << std::endl
        << MovieRatings.at(0).at(3) << std::endl;

    std::cout << std::endl;

    return 0;
}
