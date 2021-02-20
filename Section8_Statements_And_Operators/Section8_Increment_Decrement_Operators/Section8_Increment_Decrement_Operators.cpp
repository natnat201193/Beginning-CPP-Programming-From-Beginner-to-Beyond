// Section 8.
/*
    Increment operator ++
    Decrement operator --

    increments or decrements its operand by 1.
    Can be used with integers, floating point types and pointers.

    Prefix ++num
    Postfix num++

    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/

#include <iostream>
using namespace std;

int main()
{
    int Counter{ 10 };
    int Result{ 0 };

    // Example 1, simple increment.
    cout << "*****Example 1, simple increment.*****" << endl;
    cout << "Counter: " << Counter << endl; // 10.

    Counter = { Counter + 1 };
    cout << "Counter: " << Counter << endl; // 11.

    Counter++;
    cout << "Counter: " << Counter << endl; // 12.

    ++Counter;
    cout << "Counter: " << Counter << endl << endl; // 13.


    // Example 2, pre-increment.
    cout << "*****Example 2, pre-increment.*****" << endl;
    Counter = { 10 };
    Result = { 0 };

    cout << "Counter: " << Counter << endl; // 10.

    Result = { ++Counter }; // Note the pre-increment. // Incrementing Counter by 1, then assigning Counter to Result.
    cout << "*****Incrementing Counter by 1, then assigning Counter to Result.*****" << endl;
    cout << "Counter: " << Counter << endl; // 11.
    cout << "Result: " << Result << endl << endl; // 11.


    // Example 3, post-increment.
    cout << "*****Example 3, post-increment.*****" << endl;
    Counter = { 10 };
    Result = { 0 };

    cout << "Counter: " << Counter << endl;

    Result = { Counter++ }; // Note the post-increment. // Assigning Counter to Result, then incrementing Counter by 1.
    cout << "*****Assigning Counter to Result, then incrementing Counter by 1.*****" << endl;
    cout << "Counter: " << Counter << endl; // 11.
    cout << "Result: " << Result << endl << endl; // 10.


    // Example 4.
    cout << "*****Example 4.*****" << endl;
    Counter = { 10 };
    Result = { 0 };

    cout << "Counter: " << Counter << endl;

    Result = { ++Counter + 10 }; // Note the pre-increment. // Incrementing Counter by 1, then assigning Counter + 10 to Result.
    cout << "*****Incrementing Counter by 1, then assigning Counter + 10 to Result.*****" << endl;
    cout << "Counter: " << Counter << endl; // 11.
    cout << "Result: " << Result << endl << endl; // 21.


    // Example 5.
    cout << "*****Example 5.*****" << endl;
    Counter = { 10 };
    Result = { 0 };

    cout << "Counter: " << Counter << endl;

    Result = { Counter++ + 10 }; // Note the post-increment. // Assigning Counter + 10 to Result, then incrementing Counter by 1.
    cout << "*****Assigning Counter + 10 to Result, then incrementing Counter by 1.*****" << endl;
    cout << "Counter: " << Counter << endl; // 11.
    cout << "Result: " << Result << endl << endl; // 20.


    cout << endl;
    return 0;
}
