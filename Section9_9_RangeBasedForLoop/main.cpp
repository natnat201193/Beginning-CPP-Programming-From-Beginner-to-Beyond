// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Range-based For Loop
#include <iostream>
#include <vector>
#include <iomanip>

int main() 
{
    int Scores[]{ 10, 20, 30 };

    for (auto Score : Scores)
        std::cout << Score << std::endl;

    std::cout << std::endl;
    std::vector<double> Temperatures {87.9, 77.9, 80.0, 72.5};
    double AverageTemp {};
    double Total {};
        
    for (auto Temp: Temperatures)
        Total += Temp;
        
    if (Temperatures.size() != 0)
        AverageTemp = { Total / Temperatures.size() };
          
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Average Temperature is " << AverageTemp << std::endl;

    std::cout << std::endl;
    for (auto Val: {1,2,3,4,5})
        std::cout << Val << std::endl;

    std::cout << std::endl;
    for (auto C: "This is a test")
        if (C != ' ') // ignore spaces.
            std::cout << C;

    std::cout << std::endl << std::endl;
    for (auto C: "This is a test")
        if (C == ' ')
            std::cout << "\t"; // replace spaces with tabs.
        else
            std::cout << C;

    std::cout << std::endl;
    return 0;
}
