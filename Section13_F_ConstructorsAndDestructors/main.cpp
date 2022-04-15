// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Constructors and Destructors

#include <iostream>
#include <string>

class Player
{

private:
	std::string Name{ };
	int Health{ };
	int XP{ };

public:
	void SetName(const std::string &NameVal)
	{
		Name = NameVal;
	}

	// Overloaded Constructors
	Player()
	{
		std::cout << "No args constructor called" << std::endl;
	}

	Player(std::string Name)
	{
		std::cout << "std::string arg constructor called" << std::endl;
	}

	Player(std::string Name, int Health, int XP)
	{
		std::cout << "Three args constructor called" << std::endl;
	}

	// Destructor
	~Player()
	{
		std::cout << "Destructor called for " << Name << std::endl;
	}
};

int main()
{
	{
		Player Slayer{ };
		Slayer.SetName("Slayer");
	}

	{
		Player Frank{ };
		Frank.SetName("Frank");
		Player Hero("Hero");
		Hero.SetName("Hero");
		Player Villain("Villain", 100, 12);
		Villain.SetName("Villain");
	}

	Player* Enemy = new Player;
	Enemy->SetName("Enemy");

	Player* LevelBoss = new Player("Level Boss", 1000, 300);
	LevelBoss->SetName("Level Boss");

	delete Enemy;
	delete LevelBoss;

	return 0;
}
