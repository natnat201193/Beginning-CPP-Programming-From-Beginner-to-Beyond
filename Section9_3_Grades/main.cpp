// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Grades
/*
    Calculate a sudent's grade on an exam given their Score
    and tell them if they passed the course
*/

#include <iostream>

int main()
{
    int Score{};
    std::cout << "Enter your Score on the exam (0-100) : ";
    std::cin >> Score;
    char LetterGrade{};

    if (Score >= 0 && Score <= 100)
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

        std::cout << "Your grade is: " << LetterGrade << std::endl;
        if (LetterGrade == 'F')
            std::cout << "Sorry, you must repeat the class" << std::endl;
        else
            std::cout << "Congrats!" << std::endl;
    }
    else
    {
        std::cout << "Sorry, " << Score << " is not in range" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
