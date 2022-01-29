// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
#include <cstring>      // for c-style string functions
#include <cctype>       // for character-based functions

int main()
{
    char FirstName[20]{};
    char LastName[20]{};
    char FullName[50]{};
    char Temp[50]{};

    //std::cout << "Please enter your first name: ";
    //std::cin >> FirstName;

    //std::cout << "Please enter your last name: ";
    //std::cin >> LastName;
    //std::cout << "-------------------------------" << std::endl;

    //std::cout << "Hello, " << FirstName << " your first name has " << strlen(FirstName) << " characters" << std::endl;
    //std::cout << "and your last name, " << LastName << " has " << strlen(LastName) << " characters" << std::endl;

    //strcpy_s(FullName, FirstName);          // copy FirstName to FullName
    //strcat_s(FullName, " ");                       // concatenate FullName and a space
    //strcat_s(FullName, LastName);           // concatenate LastName to FullName
    //std::cout << "Your full name is " << FullName << std::endl;

    //std::cout << "-------------------------------" << std::endl;
    //std::cout << "Enter your full name: ";
    //std::cin >> FullName;

    //std::cout << "Your full name is " << FullName << std::endl;

    std::cout << "Enter your full name: ";
    std::cin.getline(FullName, 50);
    std::cout << "Your full name is " << FullName << std::endl;

    std::cout << "-------------------------------" << std::endl;
    strcpy_s(Temp, FullName);
    if (strcmp(Temp, FullName) == 0)
        std::cout << Temp << " and " << FullName << " are the same" << std::endl;
    else
        std::cout << Temp << " and " << FullName << " are different" << std::endl;

    std::cout << "-------------------------------" << std::endl;


    for (size_t I{ 0 }; I < strlen(FullName); ++I) {
        if (isalpha(FullName[I]))
            FullName[I] = static_cast<char>(toupper(FullName[I]));
    }
    std::cout << "Your full name is " << FullName << std::endl;


    std::cout << "-------------------------------" << std::endl;
    if (strcmp(Temp, FullName) == 0)
        std::cout << Temp << " and " << FullName << " are the same" << std::endl;
    else
        std::cout << Temp << " and " << FullName << " are different" << std::endl;

    std::cout << "-------------------------------" << std::endl;
    std::cout << "Result of comparing " << Temp << " and " << FullName << ": " << strcmp(Temp, FullName) << std::endl;
    std::cout << "Result of comparing " << FullName << " and " << Temp << ": " << strcmp(FullName, Temp) << std::endl;

    std::cout << std::endl;
    return 0;
}
