// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

/*
    Shipping cost calculator

    Ask the user for package dimension in inches
    Length, Width, Height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip>

int main()
{
    int Length{}, Width{}, Height{};
    double BaseCost{ 2.50 };
    const int Tier1Threshold{ 100 };    // volume
    const int Tier2Threshold{ 500 };    // volume
    int MaxDimensionLength{ 10 };  // inches
    double Tier1Surcharge{ 0.10 };  // 10% extra
    double Tier2Surcharge{ 0.25 };  // 25% extra
    // All dimension must be 10 inches or less
    int PackageVolume{};

    std::cout 
        << "Welcome to the package cost calculator" << std::endl
        << "Enter Length, Width, and Height of the package separated by spaces : ";
    std::cin >> Length >> Width >> Height;

    if (Length > MaxDimensionLength || Width > MaxDimensionLength || Height > MaxDimensionLength) 
    {
        std::cout << "Sorry, package rejected - dimension exceeded" << std::endl;
    }
    else 
    {
        double PackageCost{};
        PackageVolume = Length * Width * Height;
        PackageCost = BaseCost;

        if (PackageVolume > Tier2Threshold) 
        {
            PackageCost += PackageCost * Tier2Surcharge;
            std::cout << "adding tier 2 surcharge" << std::endl;
        }
        else if (PackageVolume > Tier1Threshold) 
        {
            PackageCost += PackageCost * Tier1Surcharge;
            std::cout << "adding tier 1 surcharge" << std::endl;
        }

        std::cout
            << std::fixed << std::setprecision(2) // prints dollars nicely
            << "The volume of your package is: " << PackageVolume << std::endl
            << "Your package will cost $" << PackageCost << " to ship " << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
