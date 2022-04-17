// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Default Constructors
#include <iostream>
#include <string>

class Player
{

private:
	std::string Name{ };
	int Health{ };
	int Xp{ };

public:
	void SetName(const std::string &NameVal)
	{
		Name = NameVal;
	}

	std::string GetName()
	{
		return Name;
	}

	Player()
	{
		Name = "None";
		Health = { 100 };
		Xp = { 3 };
	}

	Player(std::string NameVal, int HealthVal, int XpVal)
	{
		Name = { NameVal };
		Health = { HealthVal };
		Xp = { XpVal };
	}
};

int main()
{
	Player Hero{ };
	Player Frank{ "Frank", 100, 13 };
	Frank.SetName("Frank");
	std::cout << Frank.GetName() << std::endl;
	return 0;
}
