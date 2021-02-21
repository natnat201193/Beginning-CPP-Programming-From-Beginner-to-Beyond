// Section 8 Challenge.
/*
    For this program I will be using US dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents.

    You may assume that the number of cents entered is greater than or equal to zero.

    The program should then display how to provide that change to the user.

    In the US:
    1 dollar is 100 cents.
    1 quarter is 25 cents.
    1 dime is 10 cents.
    1 nickel is 5 cents.
    1 penny is 1 cent.

    Here is a sample run:

    Enter an amount in cents: 92

    You can provide this change as follows:
    dollars: 0
    quarters: 3
    dimes: 1
    nickels: 1
    pennies: 2

    Feel free to use your own currency system.
    Also, think of how you might solve the problem using the modulo operator.
*/

#include <iostream>
using namespace std;

int main()
{
    // Conversion values.
    const int DollarValue{ 100 };
    const int QuarterValue{ 25 };
    const int DimeValue{ 10 };
    const int NickelValue{ 5 };
    int CentsAmount{ };

    // Solution 1 - not using the modulo operator.
    cout << "Solution 1 - not using the modulo operator." << endl;
    cout << "Enter an amount in cents : ";
    cin >> CentsAmount;

    int Balance{}, Dollars{ }, Quarters{ }, Dimes{ }, Nickels{ }, Pennies{ };

    Dollars = { CentsAmount / DollarValue };
    Balance = { CentsAmount - (Dollars * DollarValue) };

    Quarters = { Balance / QuarterValue };
    Balance -= Quarters * QuarterValue;

    Dimes = { Balance / DimeValue };
    Balance -= Dimes * DimeValue;

    Nickels = { Balance / NickelValue };
    Balance -= Nickels * NickelValue;

    Pennies = { Balance };

    cout << "You can provide this change as follows : " << endl;
    cout << "Dollars  : " << Dollars << endl;
    cout << "Quarters : " << Quarters << endl;
    cout << "Dimes    : " << Dimes << endl;
    cout << "Nickels  : " << Nickels << endl;
    cout << "Pennies  : " << Pennies << endl << endl;


    // Solution 2 - using the modulo operator.
    cout << "Solution 2 - using the modulo operator." << endl;
    cout << "Enter an amount in cents : ";
    cin >> CentsAmount;

    Balance, Dollars, Quarters, Dimes, Nickels, Pennies = { 0 }; // reset everything to zero.

    Dollars = { CentsAmount / DollarValue };
    Balance = { CentsAmount % DollarValue };

    Quarters = { Balance / QuarterValue };
    Balance %= QuarterValue;

    Dimes = { Balance / DimeValue };
    Balance %= DimeValue;

    Nickels = { Balance / NickelValue };
    Balance %= NickelValue;

    Pennies = { Balance };

    cout << "You can provide this change as follows : " << endl;
    cout << "Dollars  : " << Dollars << endl;
    cout << "Quarters : " << Quarters << endl;
    cout << "Dimes    : " << Dimes << endl;
    cout << "Nickels  : " << Nickels << endl;
    cout << "Pennies  : " << Pennies << endl << endl;

    cout << endl;
    return 0;
}
