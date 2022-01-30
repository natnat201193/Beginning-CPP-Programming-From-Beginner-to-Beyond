// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Function Definitions
// Area of Circle and Volume of a Cylinder
#define _USE_MATH_DEFINES // for M_PI
#include <cmath> // for M_PI
#include <iostream>

double CalcAreaCircle(double Radius)
{
    return M_PI * Radius * Radius;
}

double CalcVolumeCylinder(double Radius, double Height)
{
    //return M_PI * Radius * Radius * Height;
    return CalcAreaCircle(Radius) * Height;
}

void AreaCircle()
{
    double Radius{};
    std::cout << std::endl << "Enter the Radius of the circle: ";
    std::cin >> Radius;
    std::cout << "The area of a circle with Radius " << Radius << " is " << CalcAreaCircle(Radius) << std::endl;
}

void VolumeCylinder()
{
    double Radius{};
    double Height{};
    std::cout << std::endl << "Enter the Radius of the cylinder: ";
    std::cin >> Radius;
    std::cout << std::endl << "Enter the Height of the cylinder: ";
    std::cin >> Height;

    std::cout << "The volume of a cylinder with Radius " << Radius << " and Height " << Height << " is " << CalcVolumeCylinder(Radius, Height) << std::endl;
}

int main()
{
    AreaCircle();
    //AreaCircle();
    VolumeCylinder();
    return 0;
}
