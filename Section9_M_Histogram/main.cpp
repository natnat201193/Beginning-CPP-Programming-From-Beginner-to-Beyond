// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Nested Loops - Histogram
#include <iostream>
#include <vector>

int main()
{
    int NumItems{};

    std::cout << "How many Data items do you have? ";
    std::cin >> NumItems;

    std::vector<int> Data{};

    for (int I{ 1 }; I <= NumItems; ++I)
    {
        int DataItem{};
        std::cout << "Enter Data item " << I << ": ";
        std::cin >> DataItem;
        Data.push_back(DataItem);
    }

    std::cout << std::endl << "Displaying Histogram" << std::endl;
    for (auto Val : Data)
    {
        for (int I{ 1 }; I <= Val; ++I)
        {
            if (I % 5 == 0)
                std::cout << "*";
            else
                std::cout << "-";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
