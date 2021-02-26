// Section 9.
// Nested Loops - Multiplication Table.
#include <iostream>
using namespace std;

int main()
{
	for (int Num1{ 1 }; Num1 <= 10; ++Num1)
	{
		for (int Num2{ 1 }; Num2 <= 10; ++Num2)
		{
			cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
		}
		cout << "----------------" << endl;
	}

	cout << endl;
	return 0;
}
