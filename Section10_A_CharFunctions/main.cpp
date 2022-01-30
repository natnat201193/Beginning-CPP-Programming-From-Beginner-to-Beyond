// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <iostream>
#include <cctype>

int main()
{
    char  Str[]{ "1234'5sddd'fdffg\n\t&^%23**~Frank Mary~     @!()-+=%^?<>;:" };
    int NumLetters{};
    int NumDigits{};
    int NumWhitespace{};
    int NumPunctuation{};
    int NumOthers{};

    for (char C : Str)
    {
        if (isalpha(C))
            NumLetters++;
        else if (isdigit(C))
            NumDigits++;
        else if (isspace(C))
            NumWhitespace++;
        else if (ispunct(C))
            NumPunctuation++;
        else
            NumOthers++;
    }

    std::cout 
        << "Letters : " << NumLetters << std::endl
        << "Digits: " << NumDigits << std::endl
        << "Whitespace: " << NumWhitespace << std::endl
        << "Punctuation: " << NumPunctuation << std::endl
        << "Others: " << NumOthers << std::endl;

    std::cout << std::endl;

    char Str1[]{ "This is a test - 1 2 3" };
    for (char C : Str1)
    {
        std::cout << static_cast<char>(toupper(C));
    }

    std::cout << std::endl;
    return 0;
}
