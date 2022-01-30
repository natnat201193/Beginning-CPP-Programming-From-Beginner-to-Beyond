// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Default Arguments
#include <iostream>
#include <iomanip>
#include <string>

double CalcCost(double BaseCost = 100.0, double TaxRate = 0.06, double Shipping = 3.50);

void Greeting(std::string Name, std::string Prefix = "Mr.", std::string Suffix = "");

double CalcCost(double BaseCost, double TaxRate, double Shipping)
{
    BaseCost += (BaseCost* TaxRate) + Shipping;
    return BaseCost;
}

void Greeting(std::string Name, std::string Prefix, std::string Suffix)
{
    std::cout << "Hello " << Prefix + " " + Name + " " + Suffix << std::endl;
}

int main()
{
    double Cost{ 0 };
    Cost = CalcCost(100.0, 0.08, 4.25);        // will use no defaults  100 + 8 + 4.25 

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Cost is: " << Cost << std::endl;    // 112.25

    Cost = CalcCost(100.0, 0.08);                  // will use default Shipping  100 + 8 + 3.50 
    std::cout << "Cost is: " << Cost << std::endl;    // 111.50

    Cost = CalcCost(200.0);                         // will use default tax and Shipping   200 + 12 + 3.50
    std::cout << "Cost is: " << Cost << std::endl;    // 215.50

    Cost = CalcCost();
    std::cout << "Cost is: " << Cost << std::endl;    // 100 + 6 + 3.50

    Greeting("Glenn Jones", "Dr.", "M.D.");
    Greeting("James Rogers", "Professor", "Ph.D.");
    Greeting("Frank Miller", "Dr.");
    Greeting("William Smith");
    Greeting("Mary Howard", "Mrs.", "Ph.D.");

    std::cout << std::endl;
    return 0;
}
