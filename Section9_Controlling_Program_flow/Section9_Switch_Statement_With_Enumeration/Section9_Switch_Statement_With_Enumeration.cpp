// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// Section 9.
// Switch statement with enumeration.
#include <iostream>
using namespace std;

int main()
{
	// Using enum class instead of standard enum to prevent "enum type is unscoped" warning.

	enum class Direction
	{
		Left,
		Right,
		Up,
		Down
	};

	Direction Heading{ Direction::Left };

	switch (Heading)
	{
		case Direction::Left:
			cout << "Going left." << endl;
			break;
		case Direction::Right:
			cout << "Going right." << endl;
			break;
		case Direction::Up:
			cout << "Going up." << endl;
			break;
		case Direction::Down:
			cout << "Going down." << endl;
			break;
		default:
			cout << "Not a valid heading." << endl;
	}

	cout << endl;
	return 0;
}
