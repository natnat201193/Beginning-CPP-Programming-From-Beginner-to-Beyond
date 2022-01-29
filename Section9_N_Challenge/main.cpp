// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Section 9 Challenge
/*  This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print Numbers
    A - Add a number
    M - Display mean of the Numbers
    S - Display the Smallest number
    L - Display the Largest number
    Q - Quit

    Enter your choice:

    The program should only accept valid choices from the user, both upper and lowercase Selections should be allowed.
    If an illegal choice is made, you should display, "Unknown Selection, please try again" and the menu options should be
    displayed again.

    If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
    If the list is empty you should display "[] - the list is empty"
    If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
    For example, [ 1 2 3 4 5 ]

    If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
    which you will add to the list and then display it was added. For example, if the user enters 5
    You should display, "5 added".
    Duplicate list entries are OK

    If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
    If the list is empty you should display, "Unable to calculate the mean - no data"

    If the user enters 'S' or 's' you should display the Smallest element in the list.
    For example, if the list contains [2 4 5 1],  you should display, "The Smallest number is 1"
    If the list is empty you should display, "Unable to determine the Smallest number - list is empty"

    If the user enters 'L' or 'l' you should display the Largest element in the list
    For example, if the list contains [2 4 5 1], you should display, "The Largest number is 5"
    If the list is empty you should display, "Unable to determine the Largest number - list is empty"

    If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate. */

#include <iostream>
#include <vector>

int main()
{
    bool ShouldQuit{ false };
    std::vector<int> Numbers{};
    char Selection{};

    do 
    {
        std::cout 
            << std::endl << "P - Print numbers." << std::endl
            << "A - Add a number." << std::endl
            << "M - Display mean of the numbers." << std::endl
            << "S - Display the Smallest number." << std::endl
            << "L - Display the Largest number." << std::endl
            << "C - Clear the list of numbers." << std::endl
            << "Q - Quit" << std::endl
            << std::endl << "Enter your choice: ";
        std::cin >> Selection;

        switch (Selection)
        {
            case 'p':
            case 'P':
            {
                if (Numbers.size() == 0)
                    std::cout << "[] - the list is empty." << std::endl;
                else
                {
                    std::cout << "[ ";
                    for (auto Num : Numbers)
                        std::cout << Num << " ";
                    std::cout << "]" << std::endl;
                }
            }   break;
            case 'a':
            case 'A':
            {
                int NumToAdd{};
                std::cout << "Enter an integer to add to the list: ";
                std::cin >> NumToAdd;
                Numbers.push_back(NumToAdd);
                std::cout << NumToAdd << " added." << std::endl;
            }   break;
            case 'm':
            case 'M':
            {
                if (Numbers.size() == 0)
                    std::cout << "Unable to calculate mean - no data." << std::endl;
                else
                {
                    int Total{};
                    for (auto Num : Numbers)
                        Total += Num;
                    std::cout << "The mean is: " << static_cast<double>(Total) / Numbers.size() << std::endl;
                }
            }   break;
            case 's':
            case 'S':
            {
                if (Numbers.size() == 0)
                    std::cout << "Unable to determine the Smallest - list is empty." << std::endl;
                else
                {
                    int Smallest = Numbers.at(0);
                    for (auto Num : Numbers)
                        if (Num < Smallest)
                            Smallest = Num;
                    std::cout << "The Smallest number is: " << Smallest << std::endl;
                }
            }   break;
            case 'l':
            case 'L':
            {
                if (Numbers.size() == 0)
                    std::cout << "Unable to determine Largest - list is empty." << std::endl;
                else
                {
                    int Largest = Numbers.at(0);
                    for (auto Num : Numbers)
                        if (Num > Largest)
                            Largest = Num;
                    std::cout << "The Largest number is: " << Largest << std::endl;
                }
            }   break;
            case'c':
            case'C':
                Numbers.clear();
                std::cout << "List of numbers cleared." << std::endl;
                break;
            case 'q':
            case 'Q':
                std::cout << "Goodbye." << std::endl;
                ShouldQuit = { true };
                break;
            default:
                std::cout << "Unknown Selection, please try again." << std::endl;
                break;
        }

    } while (!ShouldQuit);

    std::cout << std::endl;
    return 0;
}
