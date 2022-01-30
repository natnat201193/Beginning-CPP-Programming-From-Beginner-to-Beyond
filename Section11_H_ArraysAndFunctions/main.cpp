// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Arrays and functions
#include <iostream>

void PrintArray(const int Arr[], size_t Size);
void SetArray(int Arr[], size_t Size, int Value);

int main()
{
    int MyScores[]{ 100, 98, 90, 86, 84 };

    PrintArray(MyScores, 5);
    SetArray(MyScores, 5, 100);
    PrintArray(MyScores, 5);
    PrintArray(MyScores, 5);

    std::cout << std::endl;
    return 0;
}

void PrintArray(const int Arr[], size_t Size) // const
{
    for (size_t I{ 0 }; I < Size; ++I)
        std::cout << Arr[I] << " ";
    std::cout << std::endl;
    // Arr[0] = 50000; // bug
}

// set each Array element to Value
void SetArray(int Arr[], size_t Size, int Value)
{
    for (size_t I{ 0 }; I < Size; ++I)
        Arr[I] = Value;
}
