// Section 6.
// The sizeof operator.
#include <iostream>
#include <climits> // make sure you include climits for integer types.
                   // Similar information for floating point numbers is contained in <cfloat>
using namespace std;

int main()
{
    cout << "sizeof information.\n";
    cout << "===================================\n";
    cout << "char: " << sizeof(char) << " bytes.\n";
    cout << "int: " << sizeof(int) << " bytes.\n";
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes.\n";
    cout << "short: " << sizeof(short) << " bytes.\n";
    cout << "long: " << sizeof(long) << " bytes.\n";
    cout << "long long: " << sizeof(long long) << " bytes.\n";


    cout << "\n\n===================================\n";
    cout << "float: " << sizeof(float) << " bytes.\n";
    cout << "double: " << sizeof(double) << " bytes.\n";
    cout << "long double: " << sizeof(long double) << " bytes.\n";


    cout << "\n\n===================================\n";
    // use values defined in <climits>
    cout << "Minimum values(defined in <climits>):\n";
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;


    cout << "\n\n===================================\n";
    // use values defined in <climits>
    cout << "Maximum values(defined in <climits>):\n";
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;


    cout << "\n\n===================================\n";
    // sizeof can also be used with variable names.
    cout << "sizeof using variable names:\n";
    int Age{ 21 };
    cout << "Age is " << sizeof(Age) << " bytes.\n"; // or: cout << "Age is " << sizeof Age << " bytes.\n";
    double Wage{ 22.24 };
    cout << "Wage is " << sizeof(Wage) << " bytes.\n"; // or: cout << "Wage is " << sizeof Wage << " bytes.\n"; 

    return 0;
}
