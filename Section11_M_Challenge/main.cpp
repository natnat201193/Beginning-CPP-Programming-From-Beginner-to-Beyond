// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Challenge
/***********************************************************************************************************
    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.

    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.

    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.

        - You can start by defining a function that displays the menu
        - You can then define a function that reads the Selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of Numbers, calculates the mean and so forth

    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!

    Finally,  don't forget to use function prototypes! 
************************************************************************************************************
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print Numbers
    A - Add a Number
    M - Display mean of the Numbers
    S - Display the Smallest Number
    L - Display the largest Number
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
    For example, if the list contains [2 4 5 1],  you should display, "The Smallest Number is 1"
    If the list is empty you should display, "Unable to determine the Smallest Number - list is empty"

    If the user enters 'L' or 'l' you should display the largest element in the list
    For example, if the list contains [2 4 5 1], you should display, "The largest Number is 5"
    If the list is empty you should display, "Unable to determine the largest Number - list is empty"

    If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

    Before you begin. Write out the steps you need to take and decide in what order they should be done.
    Think about what loops you should use as well as what you will use for your Selection logic.

    This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

    Finally, be sure to test your program as you go and at the end.

    Hint: Use a vector!

    Additional functionality if you wish to extend this program.

    - search for a Number in the list and if found display the Number of times it occurs in the list
    - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
    - don't allow duplicate entries
    - come up with your own ideas! 
***********************************************************************************************************/

#include <iostream>
#include <vector>
#include <cctype> // for toupper

// Prototypes for displaying the menu and getting user Selection
void DisplayMenu();
char GetSelection();

// Menu handling function prototypes
void HandleDisplay(const std::vector<int>& V);
void HandleAdd(std::vector<int>& V);
void HandleMean(const std::vector<int>& V);
void HandleSmallest(const std::vector<int>& V);
void HandleLargest(const std::vector<int>& V);
void HandleFind(const std::vector<int>& V);
void HandleQuit();
void HandleUnknown();

// Prototypes for functions that work with the list
// to display it, calculate mean, etc.
void DisplayList(const std::vector<int>& V);
double CalculateMean(const std::vector<int>& V);
int GetSmallest(const std::vector<int>& V);
int GetLargest(const std::vector<int>& V);
bool Find(const std::vector<int>& V, int Target);

int main()
{
    std::vector<int> Numbers;        // our list of Numbers
    char Selection{};

    do
    {
        DisplayMenu();
        Selection = GetSelection();
        switch (Selection)
        {
            case 'P':
                HandleDisplay(Numbers);
                break;
            case 'A':
                HandleAdd(Numbers);
                break;
            case 'M':
                HandleMean(Numbers);
                break;
            case 'S':
                HandleSmallest(Numbers);
                break;
            case 'L':
                HandleLargest(Numbers);
                break;
            case 'F':
                HandleFind(Numbers);
                break;
            case 'Q':
                HandleQuit();
                break;
            default:
                HandleUnknown();
        }
    } 
    while (Selection != 'Q');

    std::cout << std::endl;
    return 0;
}

/***************************************************************
This function displays the menu to the console.
***************************************************************/
void DisplayMenu()
{
    std::cout
        << std::endl << "P - Print Numbers" << std::endl
        << "A - Add a Number" << std::endl
        << "M - Display mean of the Numbers" << std::endl
        << "S - Display the Smallest Number" << std::endl
        << "L - Display the largest Number" << std::endl
        << "F - Find a Number" << std::endl
        << "Q - Quit" << std::endl
        << std::endl << "Enter your choice: ";
}

/***************************************************************
This function simply reads a character Selection from
stdin and returns it as upper case.
***************************************************************/
char GetSelection()
{
    char Selection{};
    std::cin >> Selection;
    return static_cast<char>(toupper(Selection));
}

/***************************************************************
This function is called when the user selects the display list
option from the main menu.
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
void HandleDisplay(const std::vector<int>& V)
{
    if (V.size() == 0)
        std::cout << "[] - the list is empty" << std::endl;
    else
        DisplayList(V);
}

/***************************************************************
This function is called when the user selects add a Number
to the list from the main menu

Note that the vector parameter must NOT be const since
it will be changing the list of Numbers
***************************************************************/
void HandleAdd(std::vector<int>& V)
{
    int NumToAdd{};
    std::cout << "Enter an integer to add to the list: ";
    std::cin >> NumToAdd;
    V.push_back(NumToAdd);
    std::cout << NumToAdd << " added" << std::endl;
}

/***************************************************************
This function is called when the user selects calculate the mean
from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
void HandleMean(const std::vector<int>& V)
{
    if (V.size() == 0)
        std::cout << "Unable to calculate mean - list is empty" << std::endl;
    else
        std::cout << "The mean is " << CalculateMean(V) << std::endl;
}

/***************************************************************
This function is called when the user selects the Smallest
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
void HandleSmallest(const std::vector<int>& V)
{
    if (V.size() == 0)
        std::cout << "Unable to determine the Smallest - list is empty" << std::endl;
    else
        std::cout << "The Smallest element in the list is " << GetSmallest(V) << std::endl;
}

/***************************************************************
This function is called when the user selects the largest
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
void HandleLargest(const std::vector<int>& V)
{
    if (V.size() == 0)
        std::cout << "Unable to determine the largest - list is empty" << std::endl;
    else
        std::cout << "The largest element in the list is " << GetLargest(V) << std::endl;
}

/***************************************************************
This function is called when the user selects the find
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
void HandleFind(const std::vector<int>& V)
{
    int Target{};
    std::cout << "Enter the Number to find: ";
    std::cin >> Target;
    if (Find(V, Target))
        std::cout << Target << " was found" << std::endl;
    else
        std::cout << Target << " was not found" << std::endl;
}


/***************************************************************
This function is called when the user selects the quit
option from the main menu
***************************************************************/
void HandleQuit()
{
    std::cout << "Goodbye" << std::endl;
}

/***************************************************************
This function is called whenever the user enters a Selection
and we don't know how to handle it.
It is not one of the valid options in the main menu
***************************************************************/
void HandleUnknown()
{
    std::cout << "Unknown Selection - try again" << std::endl;
}

/***************************************************************
This function expects a list of integers as a vector
and displays all the integers in the list in square brackets
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
void DisplayList(const std::vector<int>& V)
{
    std::cout << "[ ";
    for (auto Num : V)
        std::cout << Num << " ";
    std::cout << "]" << std::endl;
}

/***************************************************************
This function expects a list of integers as a vector
and returns the calculated mean
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
Note: the list must not be empty
***************************************************************/
double CalculateMean(const std::vector<int>& V)
{
    int Total{};
    for (auto Num : V)
        Total += Num;
    return static_cast<double>(Total) / V.size();
}

/***************************************************************
This function expects a list of integers as a vector
and returns the largest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
Note: the list must not be empty
***************************************************************/
int GetLargest(const std::vector<int>& V)
{
    int largest = V.at(0);
    for (auto Num : V)
        if (Num > largest)
            largest = Num;
    return largest;
}

/***************************************************************
This function expects a list of integers as a vector
and returns the Smallest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
Note: the list must not be empty
***************************************************************/
int GetSmallest(const std::vector<int>& V)
{
    int Smallest = V.at(0);
    for (auto Num : V)
        if (Num < Smallest)
            Smallest = Num;
    return Smallest;
}

/***************************************************************
This function searches the list of integers as a vector
for the given integer Target

If the Target is found in the vector true is returned
If the Target is not found in the vector false is returned

Note that the parameter is a const reference parameter
this function should NOT modify the list of Numbers
***************************************************************/
bool Find(const std::vector<int>& V, int Target)
{
    for (auto Num : V)
        if (Num == Target)
            return true;
    return false;
}
