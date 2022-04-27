// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Copy Constructor
#include <iostream>
#include <string>

class Player
{

private:
	std::string Name;
	int Health;
	int Xp;

public:
	std::string GetName()
	{
		return Name;
	}

	int GetHealth()
	{
		return Health;
	}

	int GetXp()
	{
		return Xp;
	}

	Player(std::string NameVal = "None", int HealthVal = 0, int XpVal = 0);
	// Copy constructor
	Player(const Player &Source);
	// Destructor
	~Player()
	{
		std::cout << "Destructor called for: " << Name << std::endl;
	}
};

Player::Player(std::string NameVal, int HealthVal, int XpVal) : Name{ NameVal }, Health{ HealthVal }, Xp{ XpVal }
{
	std::cout << "Three-args constructor for " + Name << std::endl;
}

//									 : Name{ Source.Name }, Health{ Source.Health }, Xp{ Source.Xp }
Player::Player(const Player& Source) : Player{ Source.Name, Source.Health, Source.Xp }
{
	std::cout << "Copy constructor - made copy of: " << Source.Name << std::endl;
}

void DisplayPlayer(Player Player)
{
	std::cout << "Name: " << Player.GetName() << std::endl;
	std::cout << "Health: " << Player.GetHealth() << std::endl;
	std::cout << "Xp: " << Player.GetXp() << std::endl;
}

int main()
{
	Player Empty{ "XXXXXX", 100, 50 };

	Player MyNewObject{ Empty };

	DisplayPlayer(Empty);

	Player Frank{ "Frank" };
	Player Hero{ "Hero", 100 };
	Player Villain{ "Villain", 100, 55 };

	return 0;
}
