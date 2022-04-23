// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
#include <string>

class Player
{

private:
	std::string Name;
	int Health;
	int Xp;

public:
	// Overloaded Constructors
	Player();
	Player(std::string NameVal);
	Player(std::string NameVal, int HealthVal, int XpVal);
};

Player::Player() : Player{ "None", 0, 0 }
{
	std::cout << "No-args constructor" << std::endl;
}

Player::Player(std::string NameVal) : Player{ NameVal, 0, 0 }
{
	std::cout << "One-arg constructor" << std::endl;
}

Player::Player(std::string NameVal, int HealthVal, int XpVal) : Name{ NameVal }, Health{ HealthVal }, Xp{ XpVal }
{
	std::cout << "Three-args constructor" << std::endl;
}

int main()
{
	Player Empty;
	Player Frank{ "Frank" };
	Player Villain{ "Villain", 100, 55 };

	return 0;
}
