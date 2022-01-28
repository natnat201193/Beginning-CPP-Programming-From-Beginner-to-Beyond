// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Section 8 Challenge
    /*
    For this program I will be using US Pounds and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    You may assume that the number of cents entered is greater than or equal to zero

    The program should then display how to provide that change to the user.

    In the US:
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents, and
        1 penny is 1 cent.

    Here is a sample run:

    Enter an amount in cents :  92

    You can provide this change as follows:
    Pounds    : 0
    TwentyPences : 3
    TenPences     : 1
    FivePences   : 1
    Pennies  : 2

    Think of how you might solve the problem using the modulo operator. */

#include <iostream>

int main() 
{
    // define conversion values in cents
    const int 
        PoundValue{ 100 },
        TwentyPenceValue{ 20 },
        TenPenceValue{ 10 },
        FivePenceValue{ 5 };

    int ChangeAmount{};

    // Solution 1 - not using the modulo operator
    std::cout << "Enter an amount in pence: ";
    std::cin >> ChangeAmount;

    int Balance{}, 
        Pounds{}, 
        TwentyPences{}, 
        TenPences{}, 
        FivePences{}, 
        Pennies{};

    Pounds = ChangeAmount / PoundValue;
    Balance = ChangeAmount - (Pounds * PoundValue);

    TwentyPences = Balance / TwentyPenceValue;
    Balance -= TwentyPences * TwentyPenceValue;

    TenPences = Balance / TenPenceValue;
    Balance -= TenPences * TenPenceValue;

    FivePences = Balance / FivePenceValue;
    Balance -= FivePences * FivePenceValue;

    Pennies = Balance;

    std::cout 
        << std::endl << "You can provide this change as follows: " << std::endl
        << "Pounds: " << Pounds << std::endl
        << "Twenty Pences: " << TwentyPences << std::endl
        << "Ten Pences: " << TenPences << std::endl
        << "Five Pences: " << FivePences << std::endl
        << "Pennies: " << Pennies << std::endl << std::endl;
    // End of Solution 1


    // Solution 2 - using the modulo operator
    std::cout 
        << "----------------------------------" << std::endl
        << "Solution using the modulo operator" << std::endl
        << "----------------------------------" << std::endl;

    Balance = Pounds = TwentyPences = TenPences = FivePences = Pennies = 0;  // reset everthing to zero

    Pounds = ChangeAmount / PoundValue;
    Balance = ChangeAmount % PoundValue;

    TwentyPences = Balance / TwentyPenceValue;
    Balance %= TwentyPenceValue;

    TenPences = Balance / TenPenceValue;
    Balance %= TenPenceValue;

    FivePences = Balance / FivePenceValue;
    Balance %= FivePenceValue;

    Pennies = Balance;

    std::cout 
        << "You can provide this change as follows: " << std::endl
        << "Pounds: " << Pounds << std::endl
        << "Twenty Pences: " << TwentyPences << std::endl
        << "Ten Pences: " << TenPences << std::endl
        << "Five Pences: " << FivePences << std::endl
        << "Pennies: " << Pennies << std::endl;

    std::cout << std::endl;
    return 0;
}

