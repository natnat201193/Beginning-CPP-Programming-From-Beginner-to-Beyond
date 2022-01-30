// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Random Numbers
#include <iostream>
#include <cstdlib>      // required for rand()
#include <ctime>        // required for time()  

int main()
{
    int RandomNumber{};
    size_t Count{ 10 }; // number of random numbers to generate
    int Min{ 0 };       // lower bound (inclusive) 
    int Max{ 100 };     // upper bound (inclusive)

    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run
    std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (size_t i{ 1 }; i <= Count; ++i)
    {
        RandomNumber = rand() % Max + Min;     // generate a random number [Min, Max]
        std::cout << RandomNumber << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
