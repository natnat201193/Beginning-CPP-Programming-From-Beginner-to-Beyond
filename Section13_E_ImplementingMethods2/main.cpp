// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Implementing member methods 2
#include <iostream>
#include "Account.hpp"

int main()
{
	Account FrankAccount;
	FrankAccount.SetName("Frank's account");
	FrankAccount.SetBalance(1000.0);

	if (FrankAccount.Deposit(200.0))
		std::cout << "Deposit OK" << std::endl;
	else
		std::cout << "Deposit Not allowed" << std::endl;

	if (FrankAccount.Withdraw(500.0))
		std::cout << "Withdrawal OK" << std::endl;
	else
		std::cout << "Not sufficient funds" << std::endl;

	if (FrankAccount.Withdraw(1500.0))
		std::cout << "Withdraw OK" << std::endl;
	else
		std::cout << "Not sufficient funds" << std::endl;

	return 0;
}
