// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Pointer Arithmetic
#include <iostream>

int main()
{
    int Scores[]{ 100, 95, 89, 68, -1 };
    int* ScorePtr{ Scores };
    while (*ScorePtr != -1)
    {
        std::cout << *ScorePtr << std::endl;
        ScorePtr++;
    }
    std::cout << std::endl << "-------------------------" << std::endl;
    ScorePtr = { Scores };
    while (*ScorePtr != -1)
        std::cout << *ScorePtr++ << std::endl;

    std::cout << std::endl << "-------------------------" << std::endl;
    std::string S1{ "Frank" }, S2{ "Frank" }, S3{ "James" };
    std::string* P1{ &S1 };
    std::string* P2{ &S2 };
    std::string* P3{ &S1 };
    std::cout << std::boolalpha;
    std::cout << P1 << "==" << P2 << ": " << (P1 == P2) << std::endl; // false
    std::cout << P1 << "==" << P3 << ": " << (P1 == P3) << std::endl; // true
    std::cout << *P1 << "==" << *P2 << ": " << (*P1 == *P2) << std::endl; // true
    std::cout << *P1 << "==" << *P3 << ": " << (*P1 == *P3) << std::endl; // true
    P3 = { &S3 }; // point to James
    std::cout << *P1 << "==" << *P3 << ": " << (*P1 == *P3) << std::endl; // false

    std::cout << std::endl << "-------------------------" << std::endl;
    char Name[]{ "Frank" };
    char* CharPtr1{ nullptr };
    char* CharPtr2{ nullptr };
    CharPtr1 = { &Name[0] }; // F
    CharPtr2 = { &Name[3] }; // n
    std::cout << "In the std::string " << Name << ",  " << *CharPtr2 << " is " << (CharPtr2 - CharPtr1) << " characters away from " << *CharPtr1 << std::endl;

    std::cout << std::endl;
    return 0;
}
