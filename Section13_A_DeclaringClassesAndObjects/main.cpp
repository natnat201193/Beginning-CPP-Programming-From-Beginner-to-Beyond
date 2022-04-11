// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Declaring Classes and Objects
#include <iostream>
#include <string>
#include <vector>

class Player
{
	// attributes
	std::string Name{ "Player" };
	int Health{ 100 };
	int XP{ 3 };

	// methods
	void Talk(std::string);
	bool IsDead();
};

class Account
{
	// attributes
	std::string Name{ "Account" };
	double Balance{ 0.0 };

	// methods
	bool Deposit(double);
	bool Withdraw(double);
};

int main()
{
	Account FrankAccount{ };
	Account JimAccount{ };

	Player Frank{ };
	Player Hero{ };

	Player Players[ ]{ Frank, Hero };

	std::vector<Player> PlayerVec{ Frank };
	PlayerVec.push_back(Hero);

	Player* Enemy{ nullptr };
	Enemy = new Player;

	delete Enemy;

	return 0;
}
