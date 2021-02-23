// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// Section 9.
// For Loop.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "for (int i{ 1 }; i <= 10; ++i)" << endl;
	for (int i{ 1 }; i <= 10; ++i)
		cout << i << endl;
	cout << endl;


	cout << "for (int i{ 1 }; i <= 10; i+=2)" << endl;
	for (int i{ 1 }; i <= 10; i+=2)
		cout << i << endl;
	cout << endl;


	cout << "for (int i{ 10 }; i >= 0; --i)" << endl;
	for (int i{ 10 }; i >= 0; --i)
		cout << i << endl;
	cout << "Blastoff!" << endl;
	cout << endl;


	cout << "for (int i{ 10 }; i <= 100; i+=10)" << endl;
	for (int i{ 10 }; i <= 100; i+=10)
		cout << i << endl;
	cout << endl;


	cout << "for (int i{ 10 }; i <= 100; i+=10)" << endl;
	cout << "if (i % 15 == 0)" << endl;
	for (int i{ 10 }; i <= 100; i += 10)
	{
		if (i % 15 == 0)
			cout << i << endl;
	}
	cout << endl;


	cout << "for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)" << endl;
	for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
		cout << i << " + " << j << " = " << (i + j) << endl;
	cout << endl;


	cout << "for (int i{ 1 }; i <= 100; ++i)" << endl;
	cout << "cout << i;" << endl;
	cout << "if (i % 10 == 0) newline; else space" << endl;
	for (int i{ 1 }; i <= 100; ++i)
	{
		cout << i;
		if (i % 10 == 0)
			cout << endl;
		else
			cout << " ";
	}
	cout << endl;


	cout << "for (int i{ 1 }; i <= 100; ++i)" << endl;
	cout << "cout << i << ((i % 10 == 0) ? newline : space);" << endl;
	for (int i{ 1 }; i <= 100; ++i)
		cout << i << ((i % 10 == 0) ? "\n" : " ");
	cout << endl;


	cout << "vector<int> Nums{ 10, 20, 30, 40, 50 };" << endl;
	cout << "for (size_t i{ 0 }; i < Nums.size(); ++i)" << endl;
	cout << "cout << Nums.at(i) << endl;" << endl;
	vector<int> Nums{ 10, 20, 30, 40, 50 };
	for (size_t i{ 0 }; i < Nums.size(); ++i)
		cout << Nums.at(i) << endl;

	cout << endl;
	return 0;
}
