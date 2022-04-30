// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Copy Constructor - Deep Copy
#include <iostream>

class Deep
{

private:
	int *Data;

public:
	void SetDataValue(int D)
	{
		*Data = D;
	}

	int GetDataValue()
	{
		return *Data;
	}

	// Constructor
	Deep(int d);
	// Copy Constructor
	Deep(const Deep &source);
	// Destructor
	~Deep();
};

Deep::Deep(int D)
{
	Data = new int;
	*Data = D;
}

Deep::Deep(const Deep &Source) : Deep{ *Source.Data }
{
	std::cout << "Copy constructor  - deep copy" << std::endl;
}

Deep::~Deep()
{
	delete Data;
	std::cout << "Destructor freeing Data" << std::endl;
}

void DisplayDeep(Deep S)
{
	std::cout << S.GetDataValue() << std::endl;
}

int main()
{
	Deep Obj1{ 100 };
	DisplayDeep(Obj1);

	Deep Obj2{ Obj1 };

	Obj2.SetDataValue(1000);

	return 0;
}
