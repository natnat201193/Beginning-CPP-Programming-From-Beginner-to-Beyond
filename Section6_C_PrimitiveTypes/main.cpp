// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>

int main()
{
	/*****************
	* Character type *
	*****************/
	char MiddleInitial{ 'J' }; // single quotes = single character. double quotes = string of characters.
	std::cout << "My middle initial is " << MiddleInitial << std::endl;


	/****************
	* Integer types *
	****************/
	unsigned short int ExamScore{ 55 }; // same as unsigned short ExamScore{ 55 };
	std::cout << "My exam score was " << ExamScore << std::endl;

	int CountriesRepresented{ 65 };
	std::cout << "There were " << CountriesRepresented << " countries represented in my meeting" << std::endl;

	long PeopleInFlorida{ 20610000 };
	std::cout << "There are about " << PeopleInFlorida << " people in Florida" << std::endl;

	//long PeopleOnEarth{ 7'600'000'000 }; // Error narrowing conversion, C++11 list initialization prevents this from compiling to stop overflow at runtime.
	//long PeopleOnEarth( 7'600'000'000 ); // Overflow.
	long long PeopleOnEarth{ 7'600'000'000 }; // Correct.
	std::cout << "There are about " << PeopleOnEarth << " people on earth" << std::endl;

	long long DistanceToAlphaCentauri{ 9'461'000'000'000 };
	std::cout << "The distance to alpha centauri is " << DistanceToAlphaCentauri << " kilometers" << std::endl;


	/***********************
	* Floating point types *
	***********************/
	float CarPayment{ 401.23f }; // Will give a truncation from double to float without using the f suffix???
	std::cout << "My car payment is " << CarPayment << std::endl;

	double PI{ 3.14159 };
	std::cout << "PI is " << PI << std::endl;

	long double LargeAmount{ 2.7e120 };
	std::cout << LargeAmount << " is a very big number" << std::endl;


	/****************
	*  Boolean type *
	****************/
	bool GameOver{ false };
	std::cout << "The value of gameOver is " << GameOver << std::endl;


	/***********************************************
	*  Overflow example
	**********************************************/
	short Value1{ 30000 };
	short Value2{ 1000 };
	//short  Product{ Value1 * Value2 }; // causes an overflow.
	int  Product{ Value1 * Value2 }; // Correct.

	std::cout << "The product of " << Value1 << " and " << Value2 << " is " << Product << std::endl;

	return 0;
}
