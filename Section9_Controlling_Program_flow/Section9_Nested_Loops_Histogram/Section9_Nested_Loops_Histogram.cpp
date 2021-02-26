// Section 9.
// Nested Loops - Histogram.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int NumDataItems{ };
	cout << "How many data items do you have? ";
	cin >> NumDataItems;

	vector<int> Data{ };

	for (int i{ 1 }; i <= NumDataItems; ++i)
	{
		int DataItem{ };
		cout << "Enter data item " << i << ": ";
		cin >> DataItem;
		Data.push_back(DataItem);
	}

	cout << endl << "Displaying Histogram." << endl;

	for  (auto val : Data)
	{
		for (int i{ 1 }; i <= val; ++i)
		{
			if (i % 5 == 0)
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;
	}






	cout << endl;
	return 0;
}
