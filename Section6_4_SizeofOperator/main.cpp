// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

// make sure you include climits for integer types
// Similar information for floating point numbers
// is contained in <cfloat>
#include <climits>

int main() {

    std::cout << "sizeof information" << std::endl;
    std::cout << "========================" << std::endl;

    std::cout << "char: " << sizeof(char) << " bytes." << std::endl;
    std::cout << "int : " << sizeof(int) << " bytes." << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes." << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes." << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;

    std::cout << "========================" << std::endl;

    std::cout << "float: " << sizeof(float) << " bytes." << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes." << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes." << std::endl;

    // use values defined in <climits>
    std::cout << "========================" << std::endl;

    std::cout << "Minimum values:" << std::endl;
    std::cout << "char: " << CHAR_MIN << std::endl;
    std::cout << "int: " << INT_MIN << std::endl;
    std::cout << "short: " << SHRT_MIN << std::endl;
    std::cout << "long: " << LONG_MIN << std::endl;
    std::cout << "long long: " << LLONG_MIN << std::endl;

    std::cout << "========================" << std::endl;

    std::cout << "Maximum values:" << std::endl;
    std::cout << "char: " << CHAR_MAX << std::endl;
    std::cout << "int: " << INT_MAX << std::endl;
    std::cout << "short: " << SHRT_MAX << std::endl;
    std::cout << "long: " << LONG_MAX << std::endl;
    std::cout << "long long: " << LLONG_MAX << std::endl;

    // sizeof can also be used with variable names
    std::cout << "========================" << std::endl;

    std::cout << "sizeof using variable names" << std::endl;
    int Age{ 21 };
    std::cout << "Age is " << sizeof(Age) << " bytes." << std::endl;
    // or
    std::cout << "Age is " << sizeof Age << " bytes." << std::endl;

    double Wage{ 22.24 };
    std::cout << "Wage is " << sizeof(Wage) << " bytes." << std::endl;
    // or
    std::cout << "Wage is " << sizeof Wage << " bytes." << std::endl;

    return 0;
}
