#pragma once

#include <string>

class Account
{

private:
	// attributes
	std::string Name{ };
	double Balance{ };

public:
	// methods
	// declared inline
	void SetBalance(const double &Bal)
	{
		Balance = Bal;
	}

	double GetBalance()
	{
		return Balance;
	}

	// methods will be declared outside the class declaration
	void SetName(const std::string &N);
	std::string GetName();

	bool Deposit(const double &Amount);
	bool Withdraw(const double &Amount);
};
