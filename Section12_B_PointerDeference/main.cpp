// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Pointer dereference
#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Score{ 100 };
    int* ScorePtr{ &Score };
    // "deference" Points to the data contained in Score instead of the address in this case?
    std::cout << *ScorePtr << std::endl; // 100 
    *ScorePtr = 200;
    std::cout << *ScorePtr << std::endl; // 200
    std::cout << Score << std::endl; // 200

    std::cout << std::endl << "------------------------------" << std::endl;

    double HighTemp{ 100.7 };
    double LowTemp{ 37.4 };
    double* TempPtr{ &HighTemp };
    std::cout << &HighTemp << std::endl;
    std::cout << TempPtr << std::endl;
    std::cout << *TempPtr << std::endl; // 100.7
    // breaks the pointer to HighTemp's address and points it to LowTemp's address?
    TempPtr = &LowTemp;
    std::cout << &LowTemp << std::endl;
    std::cout << TempPtr << std::endl;
    std::cout << *TempPtr << std::endl; // 37.4	    

    std::cout << std::endl << "------------------------------" << std::endl;

    std::string Name{ "Frank" };
    std::string* StringPtr{ &Name };
    std::cout << *StringPtr << std::endl; // Frank
    Name = "James";
    std::cout << *StringPtr << std::endl; // James

    std::cout << std::endl << "------------------------------" << std::endl;

    std::vector<std::string> Stooges{ "Larry", "Moe", "Curly" };
    std::vector<std::string>* VectorPtr{ nullptr };
    VectorPtr = &Stooges;
    std::cout << "First Stooge: " << (*VectorPtr).at(0) << std::endl; // Larry
    std::cout << "Stooges: ";
    for (auto &Stooge : *VectorPtr)
        std::cout << Stooge << " ";

    std::cout << std::endl;
    return 0;
}
