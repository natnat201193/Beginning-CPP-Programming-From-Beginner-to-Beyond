// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

int main() 
{
    char Vowels[]{ 'a' ,'e', 'i', 'o', 'u' };

    std::cout 
        << "The first vowel is: " << Vowels[0] << std::endl
        << "The last vowel is: " << Vowels[4] << std::endl << std::endl;

    //std::cin >> Vowels[5];  //out of bounds - don't do this!!

    double HiTemps[]{ 90.1, 89.8, 77.5, 81.6 };

    std::cout 
        << "The first high temperature is: " << HiTemps[0] << std::endl;

    HiTemps[0] = 100.7; // set the first element in HiTemps to 100.7

    std::cout 
        << "The first high temperature is now: " << HiTemps[0] << std::endl << std::endl;

    int TestScores[]{ 100, 90, 80,70, 60 };

    std::cout 
        << "First score at index 0: " << TestScores[0] << std::endl
        << "Second score at index 1: " << TestScores[1] << std::endl
        << "Third score at index 2:  " << TestScores[2] << std::endl
        << "Fourth score at index 3: " << TestScores[3] << std::endl
        << "Fifth score at index 4: " << TestScores[4] << std::endl << std::endl;

    std::cout << "Enter 5 test scores separated by spaces: ";
    std::cin 
        >> TestScores[0]
        >> TestScores[1]
        >> TestScores[2]
        >> TestScores[3]
        >> TestScores[4];

    std::cout 
        << std::endl
        << "The updated array is:" << std::endl
        << "First score at index 0: " << TestScores[0] << std::endl
        << "Second score at index 1: " << TestScores[1] << std::endl
        << "Third score at index 2:  " << TestScores[2] << std::endl
        << "Fourth score at index 3: " << TestScores[3] << std::endl
        << "Fifth score at index 4: " << TestScores[4] << std::endl << std::endl
        << "Notice what the value of the array name is: " << TestScores << ", this is the memory address of the array." 
        << std::endl << std::endl;

    return 0;
}
