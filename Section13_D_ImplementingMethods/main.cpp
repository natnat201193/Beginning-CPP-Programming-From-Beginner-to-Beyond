// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Implementing member methods 1 
#include <iostream>
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
	void SetBalance(const double Bal)
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

	bool Deposit(double Amount);
	bool Withdraw(double Amount);
};

void Account::SetName(const std::string &N)
{
	Name = N;
}

std::string Account::GetName()
{
	return Name;
}

bool Account::Deposit(const double Amount)
{
	// if verify amount
	Balance += Amount;
	return true;
}

bool Account::Withdraw(const double Amount)
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
		std::cout << "Insufficient funds" << std::endl;

	if (FrankAccount.Withdraw(1500.0))
		std::cout << "Withdraw OK" << std::endl;
	else
		std::cout << "Not sufficient funds" << std::endl;

	return 0;
}
