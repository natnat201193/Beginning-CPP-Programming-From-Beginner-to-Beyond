// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// References
#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Num{ 100 };
    int &Ref{ Num };

    std::cout << Num << std::endl << Ref << std::endl;
    Num = 200;
    std::cout << std::endl << "---------------------------------" << std::endl;
    std::cout << Num << std::endl << Ref << std::endl;
    Ref = 300;
    std::cout << std::endl << "---------------------------------" << std::endl;
    std::cout << Num << std::endl << Ref << std::endl;

    std::cout << std::endl << "---------------------------------" << std::endl;
    std::vector<std::string> Stooges{ "Larry", "Moe", "Curly" };

    for (auto Str : Stooges)
        Str = "Funny"; // Str is a COPY of the each vector element

    for (auto Str : Stooges) // No change
        std::cout << Str << std::endl;

    std::cout << std::endl << "---------------------------------" << std::endl;
    for (auto &Str : Stooges) // &Str is a Reference to each vector element
        Str = "Funny";

    for (auto const &Str : Stooges) // notice we are using const
        std::cout << Str << std::endl; // now the vector elements have changed

    std::cout << std::endl;
    return 0;
}
