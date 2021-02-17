// Section 6
// Primative Data Types
#include <iostream>
using namespace std;

int main()
{
    cout << "******** Character Type. ********\n";
    /***********************************
    * Character Type.
    ************************************/
    char MiddleInitial{ 'J' }; // Notice single quotes around characters.
    cout << "My middle initial is " << MiddleInitial << "." << endl;


    cout << "\n\n******** Integer Types. ********\n";
    /***********************************
    * Integer Types.
    ************************************/
    unsigned short int ExamScore{ 55 }; // same as unsigned short ExamScore{ 55 };
    cout << "My exam score was " << ExamScore << "." << endl;

    int CountriesRepresented{ 65 };
    cout << "There where " << CountriesRepresented << " countries represented in my meeting." << endl;

    long PeopleInFlorida{ 20610000 };
    cout << "There are about " << PeopleInFlorida << " people in Florida." << endl;

    //long PeopleOnEarth = 7'600'000'000; // C Style initialization will cause an overflow for values larger than the specified type.
    //long PeopleOnEarth{ 7'600'000'000 }; // C++ 11 List initialization, will catch overflow error and prevent compiling.
    long long PeopleOnEarth{ 7'600'000'000 }; // Correct.
    cout << "There are about " << PeopleOnEarth << " people on earth." << endl;

    long long DistanceToAlphaCentauri{ 9'461'000'000'000 };
    cout << "The distance to alpha centauri is " << DistanceToAlphaCentauri << " kilometers." << endl;


    cout << "\n\n******** Floating Point Types. ********\n";
    /***********************************
    * Floating Point Types.
    ************************************/
    float CarPayment{ 401.23 };
    cout << "My car payment is " << CarPayment << "." << endl;

    double Pi{ 3.14159 };
    cout << "Pi is " << Pi << "." << endl;

    long double LargeAmount{ 2.7e120 };
    cout << LargeAmount << " is a very big number." << endl;


    cout << "\n\n******** Boolean Type. ********\n";
    /***********************************
    * Boolean Type.
    ************************************/
    bool GameOver{ false };
    cout << "The value of Game Over is " << GameOver << (GameOver ? "(True)." : "(False).") << endl;


    cout << "\n\n******** Overflow Example. ********\n";
    /***********************************
    * Overflow Example.
    ************************************/
    short Value1{ 30000 };
    short Value2{ 1000 };
    short Product{ Value1 * Value2 };
    cout << "The product of " << Value1 << " and " << Value2 << " is " << Product << "." << endl;

    return 0;
}
