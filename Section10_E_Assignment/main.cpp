// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

/* Write a C++ program that displays a Letter Pyramid from a user - provided std::string.

    Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows :

    It's much easier to understand the Letter Pyramid given examples.

    If the user enters the string "ABC", then your program should display :

      A
     ABA
    ABCBA


    If the user enters the string, "12345", then your program should display :

        1
       121
      12321
     1234321
    123454321


    If the user enters 'ABCDEFG', then your program should display :

          A
         ABA
        ABCBA
       ABCDCBA
      ABCDEDCBA
     ABCDEFEDCBA
    ABCDEFGFEDCBA


    If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display :

                             A
                            ABA
                           ABCBA
                          ABCDCBA
                         ABCDEDCBA
                        ABCDEFEDCBA
                       ABCDEFGFEDCBA
                      ABCDEFGHGFEDCBA
                     ABCDEFGHIHGFEDCBA
                    ABCDEFGHIJIHGFEDCBA
                   ABCDEFGHIJKJIHGFEDCBA
                  ABCDEFGHIJKLKJIHGFEDCBA
                 ABCDEFGHIJKLMLKJIHGFEDCBA
                ABCDEFGHIJKLMNMLKJIHGFEDCBA
               ABCDEFGHIJKLMNONMLKJIHGFEDCBA
              ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
             ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
            ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
           ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
          ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
         ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
        ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
       ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
      ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
     ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
    ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA


    If the user enters "C++isFun!", then your program should display :

            C
           C+C
          C+++C
         C++i++C
        C++isi++C
       C++isFsi++C
      C++isFuFsi++C
     C++isFunuFsi++C
    C++isFun!nuFsi++C

Think about the problem before you begin and break it down into steps. */

#include <iostream>
#include <string>

int main()
{
    std::string Letters{};

    std::cout << "Enter a string of Letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, Letters);

    size_t NumLetters = Letters.length();

    int Position{ 0 };

    // for each letter in the string.
    for (char C : Letters)
    {
        size_t NumSpaces = { NumLetters - Position };
        while (NumSpaces > 0)
        {
            std::cout << " ";
            --NumSpaces;
        }

        // Display in order up to the current character.
        for (size_t J = 0; J < Position; J++)
            std::cout << Letters.at(J);

        // Display the current 'Center' character
        std::cout << C;

        // Display the remaining characters in reverse order
        for (int J = Position - 1; J >= 0; --J)
        {
            auto K = static_cast<size_t>(J);
            std::cout << Letters.at(K);
        }

        std::cout << std::endl;
        ++Position;
    }

    return 0;
}
