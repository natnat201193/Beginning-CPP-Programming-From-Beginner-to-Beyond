// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string S0;
    std::string S1{ "Apple" };
    std::string S2{ "Banana" };
    std::string S3{ "Kiwi" };
    std::string S4{ "apple" };
    std::string S5{ S1 };        // Apple
    std::string S6{ S1, 0, 3 };  // App
    std::string S7(10, 'X');     // XXXXXXXXXX

    std::cout << S0 << std::endl;                  // No garbage
    std::cout << S0.length() << std::endl;     // empty string

    // Initialization
    std::cout 
        << std::endl << "Initialization" << std::endl << "------------------------------------------" << std::endl
        << "S1 is initialized to: " << S1 << std::endl
        << "S2 is initialized to: " << S2 << std::endl
        << "S3 is initialized to: " << S3 << std::endl
        << "S4 is initialized to: " << S4 << std::endl
        << "S5 is initialized to: " << S5 << std::endl
        << "S6 is initialized to: " << S6 << std::endl
        << "S7 is initialized to: " << S7 << std::endl;

    // Comparison
    std::cout 
        << std::endl << "Comparison" << std::endl << "------------------------------------------" << std::endl
        << std::boolalpha
        << S1 << " == " << S5 << ": " << (S1 == S5) << std::endl 		    // True    Apple == Apple
        << S1 << " == " << S2 << ": " << (S1 == S2) << std::endl	        // False   Apple != Banana
        << S1 << " != " << S2 << ": " << (S1 != S2) << std::endl		    // True    Apple != Banana
        << S1 << " < " << S2 << ": " << (S1 < S2) << std::endl		        // True    Apple < Banana
        << S2 << " > " << S1 << ": " << (S2 > S1) << std::endl		        // True    Banana > Apple
        << S4 << " < " << S5 << ": " << (S4 < S5) << std::endl		        // False   apple >Apple
        << S1 << " == " << "Apple" << ": " << (S1 == "Apple") << std::endl;	// True    Apple == Apple

    // Assignment 
    std::cout << std::endl << "Assignment" << std::endl << "------------------------------------------" << std::endl;

    S1 = "Watermelon";
    std::cout << "S1 is now: " << S1 << std::endl;    // Watermelon
    S2 = S1;
    std::cout << "S2 is now: " << S2 << std::endl;    // Watermelon

    S3 = "Frank";
    std::cout << "S3 is now: " << S3 << std::endl;    // Frank

    S3[0] = 'C';    // Crank
    std::cout << "S3 change first letter to 'C': " << S3 << std::endl;   //Crank
    S3.at(0) = 'P';
    std::cout << "S3 change first letter to 'P': " << S3 << std::endl;   // Prank

    // Concatenation
    S3 = "Watermelon";
    std::cout << std::endl << "Concatenation" << std::endl << "------------------------------------------" << std::endl;

    S3 = S5 + " and " + S2 + " juice"; // Apple and Banana juice
    std::cout << "S3 is now: " << S3 << std::endl; // Apple and Banana Juice

     //  S3 = "nice " + " cold " + S5 + "juice";         // Compiler error

    //  for loop
    std::cout << std::endl << "Looping" << std::endl << "------------------------------------------" << std::endl;

    S1 = "Apple";
    for (size_t I{ 0 }; I < S1.length(); ++I)
        std::cout << S1.at(I);      //  or S1[I]    Apple
    std::cout << std::endl;

    // Range-based for loop
    for (char C : S1)
        std::cout << C;     // Apple 
    std::cout << std::endl;

    // Substring
    std::cout << std::endl << "Substring" << std::endl << "------------------------------------------" << std::endl;
    S1 = "This is a test";

    std::cout << S1.substr(0, 4) << std::endl;	    // This
    std::cout << S1.substr(5, 2) << std::endl;	    // is
    std::cout << S1.substr(10, 4) << std::endl;   	// test

    // Erase
    std::cout << std::endl << "Erase" << std::endl << "------------------------------------------" << std::endl;

    S1 = "This is a test";
    S1.erase(0, 5);     // Erase This from S1 results in "is a test"
    std::cout << "S1 is now: " << S1 << std::endl;     // is a test

    // getline
    std::cout << std::endl << "getline" << std::endl << "------------------------------------------" << std::endl;

    std::string FullName{};

    std::cout << "Enter your full name: ";
    getline(std::cin, FullName);

    std::cout << "Your full name is: " << FullName << std::endl;

    // Find
    std::cout << std::endl << "find" << std::endl << "------------------------------------------" << std::endl;

    S1 = "The secret word is Boo";
    std::string Word{};

    std::cout << "Enter the word to find: ";
    std::cin >> Word;

    size_t Position = S1.find(Word);
    if (Position != std::string::npos)
        std::cout << "Found " << Word << " at position: " << Position << std::endl;
    else
        std::cout << "Sorry, " << Word << " not found" << std::endl;

    std::cout << std::endl;
    return 0;
}
