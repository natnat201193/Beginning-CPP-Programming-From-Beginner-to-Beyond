// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com


// Logical Operators
#include <iostream>

int main() 
{
    int Num{};
    const int Lower{ 10 };
    const int Upper{ 20 };

    std::cout << std::boolalpha;

    // Determine if an entered integer is between two other integers
    // assume Lower < Upper
    std::cout << "Enter an integer - the bounds are " << Lower << " and " << Upper << " : ";
    std::cin >> Num;

    bool WithinBounds {false};

    WithinBounds = (Num > Lower && Num < Upper);
    std::cout << Num  << " is between "<< Lower <<  " and " << Upper << " : " << WithinBounds << std::endl;

    // Determine if an entered integer is outside two other integers
    // assume Lower < Upper
    std::cout << std::endl << "Enter an integer - the bounds are " << Lower << " and " << Upper << " : ";
    std::cin >> Num;

    bool OutsideBounds {false};
    OutsideBounds = (Num < Lower || Num > Upper);
    std::cout << Num  << " is outside "<< Lower <<  " and " << Upper << " : " << OutsideBounds << std::endl;

    // Determine if an entered integer is exactly on the boundary
    // assume Lower < Upper
    std::cout << std::endl << "Enter an integer - the bounds are " << Lower << " and " << Upper << " : ";
    std::cin >> Num;

    bool OnBounds {false};
    OnBounds = (Num == Lower || Num == Upper);
    std::cout << Num  << " is on one of the bounds which are "<< Lower <<  " and " << Upper << " : " << OnBounds << std::endl;

    // Determine is you need to wear a coat based on Temperature and wind speed    
    bool WearCoat{ false };
    double Temperature{};
    int WindSpeed{};

    const int WindSpeedForCoat{ 25 }; // wind over this value requires a coat
    const double TemperatureForCoat{ 45 }; // Temperature below this value requires a coat

    // Require a coat if either wind is too high OR Temperature is too low
    std::cout << std::endl << "Enter the current Temperature in (F) :";
    std::cin >> Temperature;
    std::cout << "Enter windspeed in (mph): ";
    std::cin >> WindSpeed;

    WearCoat = (Temperature < TemperatureForCoat || WindSpeed > WindSpeedForCoat);
    std::cout << "Do you need to wear a coat using OR? " << WearCoat << std::endl;

    // Require a coat if BOTH the windspeed is too high AND Temperature is too low
    WearCoat = (Temperature < TemperatureForCoat&& WindSpeed > WindSpeedForCoat);
    std::cout << "Do you need to wear a coat using AND? " << WearCoat << std::endl;

    std::cout << std::endl;
    return 0;
}
