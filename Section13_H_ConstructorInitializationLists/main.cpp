// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Constructor Initialization Lists
#include <iostream>
#include <string>

class Player
{

private:
	std::string Name{ "XXXXXXX" };
	int Health{ };
	int Xp{ };

public:
	// Overloaded Constructors
	Player();
	Player(std::string NameVal);
	Player(std::string NameVal, int HealthVal, int XpVal);
};

Player::Player() : Name{ "None" }, Health{ 0 }, Xp{ 0 }
{

}

Player::Player(std::string NameVal) : Name{ NameVal }, Health{ 0 }, Xp{ 0 }
{

}

Player::Player(std::string NameVal, int HealthVal, int XpVal) : Name{ NameVal }, Health{ HealthVal }, Xp{ XpVal }
{

}

int main()
{
	Player Empty{ };
	Player Frank{ "Frank" };
	Player Villain{ "Villain", 100, 55 };

	return 0;
}
