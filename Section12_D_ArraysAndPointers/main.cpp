// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

int main()
{
    int Scores[]{ 100, 95, 89 };
    int* ScorePtr{ Scores };

    std::cout
        << "Value of Scores: " << Scores << std::endl
        << "Value of ScorePtr: " << ScorePtr << std::endl
        << "&Scores[0]: " << &Scores[0] << std::endl
        << "&Scores[1]: " << &Scores[1] << std::endl
        << "&Scores[2]: " << &Scores[2] << std::endl
        << "&ScorePtr[0]: " << &ScorePtr[0] << std::endl
        << "&ScorePtr[1]: " << &ScorePtr[1] << std::endl
        << "&ScorePtr[2]: " << &ScorePtr[2] << std::endl
        << std::endl << "Array subscript notation -------------------------" << std::endl
        << "Scores[0]: " << Scores[0] << std::endl
        << "Scores[1]: " << Scores[1] << std::endl
        << "Scores[2]: " << Scores[2] << std::endl
        << std::endl << "Pointer subscript notation -------------------------" << std::endl
        << "ScorePtr[0]: " << ScorePtr[0] << std::endl
        << "ScorePtr[1]: " << ScorePtr[1] << std::endl
        << "ScorePtr[2]: " << ScorePtr[2] << std::endl
        << std::endl << "Pointer offset notation-------------------------" << std::endl
        << "*ScorePtr: " << *ScorePtr << std::endl
        << "*(ScorePtr + 1): " << *(ScorePtr + 1) << std::endl
        << "*(ScorePtr + 2): " << *(ScorePtr + 2) << std::endl
        << std::endl << "Array offset notation-------------------------" << std::endl
        << "*Scores: " << *Scores << std::endl
        << "*(Scores + 1): " << *(Scores + 1) << std::endl
        << "*(Scores + 2): " << *(Scores + 2) << std::endl;

    std::cout << std::endl;
    return 0;
}
