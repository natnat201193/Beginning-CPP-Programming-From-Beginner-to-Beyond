/* Section 7.
   Challenge.

   Write a C++ program as follows:

   Declare 2 empty vectors of integers named Vector1 and Vector2, respectively.

   Add 10 and 20 to Vector1 dynamically using push_back.
   Display the elements in Vector1 using the at() method as well as its size using the size() method.

   Add 100 and 200 to Vector2 dynamically using push_back.
   Display the elements in vector2 using the at() method as well as its size using the size() method.

   Declare an empty 2 dimensional vector called Vector2d.
   Remember, that a 2 dimensional vector is a vector of vector<int>

   Add Vector1 to Vector2d dynamically using push_back.
   Add Vector2 to Vector2d dynamically using push_back.

   Display the elements in Vector2d using the at() method.

   Change Vector1.at(0) to 1000.

   Display the elements in Vector2d again using the at() method.

   Display the elements in Vector1.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//Declare 2 empty vectors of integers named Vector1 and Vector2, respectively.
	vector<int> Vector1, Vector2;

	//Add 10 and 20 to Vector1 dynamically using push_back.
	//Display the elements in Vector1 using the at() method as well as its size using the size() method.
	Vector1.push_back(10);
	Vector1.push_back(20);
	cout << "Vector1 Element 0 is: " << Vector1.at(0) << endl;
	cout << "Vector1 Element 1 is: " << Vector1.at(1) << endl;
	cout << "Vector1 contains " << Vector1.size() << " elements." << endl << endl;

	//Add 100 and 200 to Vector2 dynamically using push_back.
	//Display the elements in vector2 using the at() method as well as its size using the size() method.
	Vector2.push_back(100);
	Vector2.push_back(200);
	cout << "Vector2 Element 0 is: " << Vector2.at(0) << endl;
	cout << "Vector2 Element 1 is: " << Vector2.at(1) << endl;
	cout << "Vector2 contains " << Vector1.size() << " elements." << endl << endl;

	//Declare an empty 2 dimensional vector called Vector2d.
	//Remember, that a 2 dimensional vector is a vector of vector<int>
	vector <vector<int>> Vector2d;

	//Add Vector1 to Vector2d dynamically using push_back.
	//Add Vector2 to Vector2d dynamically using push_back.
	//Display the elements in Vector2d using the at() method.
	Vector2d.push_back(Vector1);
	Vector2d.push_back(Vector2);
	cout << "Vector2d Elements:" << endl;
	cout << "        | *Collumns* |" << endl;
	cout << "--------|----------------" << endl;
	cout << " *Rows* | " << Vector2d.at(0).at(0) << "  | " << Vector2d.at(0).at(1) << "   |" << endl;
	cout << "        | " << Vector2d.at(1).at(0) << " | " << Vector2d.at(1).at(1) << "  |" << endl << endl;

	//Change Vector1.at(0) to 1000.
	Vector1.at(0) = { 1000 };

	//Display the elements in Vector2d again using the at() method.
	cout << "Vector2d Elements:" << endl;
	cout << "        | *Collumns* |" << endl;
	cout << "--------|----------------" << endl;
	cout << " *Rows* | " << Vector2d.at(0).at(0) << "  | " << Vector2d.at(0).at(1) << "   |" << endl;
	cout << "        | " << Vector2d.at(1).at(0) << " | " << Vector2d.at(1).at(1) << "  |" << endl << endl;

	//Display the elements in Vector1.
	cout << "Vector1 Element 0 is: " << Vector1.at(0) << endl;
	cout << "Vector1 Element 1 is: " << Vector1.at(1) << endl;
	cout << "Vector1 contains " << Vector1.size() << " elements." << endl << endl;
}
