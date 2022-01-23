// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com
// Switch Statement

/*
    Ask the user what grade they expect on an exam and
    tell them what they need to score to get it.
*/

#include <iostream>

int main() 
{
    char LetterGrade{};

    std::cout << "Enter the letter grade you expect on the exam: ";
    std::cin >> LetterGrade;

    switch (LetterGrade) 
    {
        case 'a':
        case 'A':
            std::cout << "You need a 90 or above, study hard!" << std::endl;
            break;
        case 'b':
        case 'B':
            std::cout << "You need 80-89 for a B, go study!" << std::endl;
            break;
        case 'c':
        case 'C':
            std::cout << "You need 70-79 for an average grade" << std::endl;
            break;
        case 'd':
        case 'D':
            std::cout << "Hmm, you should strive for a better grade. All you need is 60-69" << std::endl;
            break;
        case 'f':
        case 'F':
        {
            char Confirm{};
            std::cout << "Are you sure (Y/N)? ";
            std::cin >> Confirm;
            if (Confirm == 'y' || Confirm == 'Y')
                std::cout << "OK, I guess you didn't study..." << std::endl;
            else if (Confirm == 'n' || Confirm == 'N')
                std::cout << "Good- go study!" << std::endl;
            else
                std::cout << "Illegal choice" << std::endl;
            break;
        }
        default:
            std::cout << "Sorry, not a valid grade" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
