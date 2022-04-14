// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Account.hpp"

void Account::SetName(const std::string &N)
{
	Name = N;
}

std::string Account::GetName()
{
	return Name;
}

bool Account::Deposit(const double &Amount)
{
	// if verify amount
	Balance += Amount;
	return true;
}

bool Account::Withdraw(const double &Amount)
{
	if (Balance - Amount >= 0)
	{
		Balance -= Amount;
		return true;
	}
	else
	{
		return false;
	}
}
