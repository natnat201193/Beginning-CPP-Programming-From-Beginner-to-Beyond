// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Challenge
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the Alphabet gets replaced by another letter of the Alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at Position n in Alphabet
with the character at Position n in Key.

To decrypt you can replace the character at Position n in Key
with the character at Position n in Alphabet.

Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

int main()
{
    std::string Alphabet{ "[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    std::string Key{ " [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    std::string SecretMessage{};
    std::cout << "Enter your secret message: ";
    getline(std::cin, SecretMessage);

    std::string EncryptedMessage{};

    std::cout << std::endl << "Encrypting message..." << std::endl;

    for (char C : SecretMessage)
    {
        size_t Position = Alphabet.find(C);
        if (Position != std::string::npos)
        {
            char NewChar{ Key.at(Position) };
            EncryptedMessage += NewChar;
        }
        else
        {
            EncryptedMessage += C;
        }
    }

    std::cout << std::endl << "Encrypted message: " << EncryptedMessage << std::endl;

    std::string DecryptedMessage{};
    std::cout << std::endl << "Decrypting message..." << std::endl;

    for (char C : EncryptedMessage)
    {
        size_t Position = Key.find(C);
        if (Position != std::string::npos)
        {
            char NewChar{ Alphabet.at(Position) };
            DecryptedMessage += NewChar;
        }
        else
        {
            DecryptedMessage += C;
        }
    }

    std::cout << std::endl << "Decrypted message: " << DecryptedMessage << std::endl;

    std::cout << std::endl;
    return 0;
}
