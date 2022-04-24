// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
#include <string>

class Player
{

private:
	std::string Name{ };
	int Health{ };
	int Xp{ };

public:
	Player(std::string NameVal = "None", int HealthVal = 0, int XpVal = 0);
	//Player(){}    // Will cause a compiler error
};

Player::Player(std::string NameVal, int HealthVal, int XpVal) : Name{ NameVal }, Health{ HealthVal }, Xp{ XpVal }
{
	std::cout << "Three-args constructor" << std::endl;
}

int main()
{
	Player Empty{ };
	Player Frank{ "Frank" };
	Player Hero{ "Hero", 100 };
	Player Villain{ "Villain", 100, 55 };

	return 0;
}
