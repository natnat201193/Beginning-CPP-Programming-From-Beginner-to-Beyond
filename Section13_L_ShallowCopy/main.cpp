// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Copy Constructor - Shallow Copy
// Note: this program will crash
#include <iostream>

class Shallow
{

private:
	int* DataPtr;

public:
	void SetDataValue(int D)
	{
		*DataPtr = D;
	}

	int GetDataValue()
	{
		return *DataPtr;
	}

	// Constructor
	Shallow(int D);
	// Copy Constructor
	Shallow(const Shallow& Source);
	// Destructor
	~Shallow();
};

Shallow::Shallow(int D)
{
	DataPtr = new int;
	*DataPtr = D;
}

Shallow::Shallow(const Shallow& Source) : DataPtr(Source.DataPtr)
{
	std::cout << "Copy constructor - shallow copy" << std::endl;
}

Shallow::~Shallow()
{
	delete DataPtr;
	std::cout << "Destructor freeing Data" << std::endl;
}

void DisplayShallow(Shallow S)
{
	std::cout << S.GetDataValue() << std::endl;
}

int main()
{
	Shallow Obj1{ 100 };
	DisplayShallow(Obj1);

	Shallow Obj2{ Obj1 };
	Obj2.SetDataValue(1000);

	return 0;
}
