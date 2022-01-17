// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix  num++

    Don't overuse this operator! Never use it twice for the same variable in the same statement!!
*/

#include <iostream>

int main() 
{
    int Counter{ 10 };
    int Result{ 0 };

    std::cout << std::endl << "Example 1 - simple increment" << std::endl;
    std::cout << "Counter: " << Counter << std::endl;

    Counter = Counter + 1;
    std::cout << "Counter: " << Counter << std::endl;

    Counter++;
    std::cout << "Counter: " << Counter << std::endl;

    ++Counter;
    std::cout << "Counter: " << Counter << std::endl;


    std::cout << std::endl << "Example 2 - preincrement" << std::endl;
    Counter = 10;
    Result = 0;
        
    std::cout << "Counter: " << Counter << std::endl;
        
    Result = ++Counter; // Note the pre increment
    std::cout << "Counter : " << Counter << std::endl;
    std::cout << "Result : " << Result << std::endl;


    std::cout << std::endl << "Example 3 - post-increment" << std::endl;
    Counter = 10;
    Result = 0;
        
    std::cout << "Counter: " << Counter << std::endl;
        
    Result = Counter++; // Note the post increment
    std::cout << "Counter: " << Counter << std::endl;
    std::cout << "Result: " << Result << std::endl;


    std::cout << std::endl << "Example 4" << std::endl;
    Counter = 10;
    Result = 0;
    
    std::cout << "Counter: " << Counter << std::endl;
    
    Result = ++Counter + 10;  // Note the pre increment
            
    std::cout << "Counter: " << Counter << std::endl;
    std::cout << "Result: " << Result << std::endl;


    std::cout << std::endl << "Example 5" << std::endl;
    Counter = 10;
    Result = 0;
    
    std::cout << "Counter: " << Counter << std::endl;
    
    Result = Counter++ + 10;  // Note the post increment
            
    std::cout << "Counter: " << Counter << std::endl;
    std::cout << "Result: " << Result << std::endl;

    std::cout << std::endl;

    return 0;
}
