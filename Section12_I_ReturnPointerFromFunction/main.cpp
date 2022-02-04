// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Return Pointer from a function
#include <iostream>

int* CreateArray(size_t Size, int InitValue = 0)
{
    int* NewStorage{ nullptr };
    NewStorage = new int[Size];
    for (size_t I{ 0 }; I < Size; ++I)
        *(NewStorage + I) = InitValue;
    return NewStorage;
}

void Display(const int* const Array, size_t Size)
{
    for (size_t I{ 0 }; I < Size; ++I)
        std::cout << Array[I] << std::endl;
    std::cout << std::endl;
}

int main()
{
    int* MyArray{ nullptr };
    size_t Size{};
    int InitValue{};

    std::cout << std::endl << "How many integers would you like to allocate? ";
    std::cin >> Size;
    std::cout << "What value would you like them initialized to? ";
    std::cin >> InitValue;

    MyArray = CreateArray(Size, InitValue);
    std::cout << std::endl << "--------------------------------------" << std::endl;

    Display(MyArray, Size);
    delete[] MyArray;
    return 0;
}
