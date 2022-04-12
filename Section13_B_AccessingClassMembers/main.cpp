// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Accessing Class Members
#include <iostream>
#include <string>

class Player
{

public:
	// attributes
	std::string Name{ };
	int Health{ };
	int XP{ };

	// methods
	void Talk(const std::string &TextToSay)
	{
		std::cout << Name << " says " << TextToSay << std::endl;
	}

	bool IsDead();
};

class Account
{

public:
	// attributes
	std::string Name;
	double Balance;

	// methods
	bool Deposit(double Bal)
	{
		Balance += Bal;
		std::cout << "In deposit" << std::endl;

		return true;
	}

	bool Withdraw(double Bal)
	{
		Balance -= Bal;
		std::cout << "In withdraw" << std::endl;

		return true;
	}
};

int main()
{
	Account FrankAccount{ };
	FrankAccount.Name = "Frank's account";
	FrankAccount.Balance = { 5000.0 };

	FrankAccount.Deposit(1000.0);
	FrankAccount.Withdraw(500.0);

	Player Frank{ };
	Frank.Name = "Frank";
	Frank.Health = { 100 };
	Frank.XP = { 12 };
	Frank.Talk("Hi there");

	Player* Enemy = { new Player };
	(*Enemy).Name = "Enemy";
	(*Enemy).Health = { 100 }; // Same as Enemy->Health = { 100 };
	Enemy->XP = { 15 };

	Enemy->Talk("I will destroy you!");

	delete Enemy;

	return 0;
}
