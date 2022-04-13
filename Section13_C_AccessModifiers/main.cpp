// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Access Modifers
#include <iostream>
#include <string>

class Player
{

private:
	// attributes
	std::string Name{ "Player" };
	int Health{ };
	int XP{ };

public:
	// methods
	void Talk(const std::string &TextToSay)
	{
		std::cout << Name << " says " << TextToSay << std::endl;
	}

	bool IsDead();
};

int main()
{
	Player Frank;
	//Frank.Name = "Frank"; // won't compile, Name is private
	//std::cout << Frank.Health << std::endl; // won't compile, Health is private
	Frank.Talk("Hello there");

	return 0;
}
