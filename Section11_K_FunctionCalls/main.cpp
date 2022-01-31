// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// How Function calls work
// The call stack
#include <iostream>

void Func2(int& X, int Y, int Z)
{
    X += Y + Z;
}

int Func1(int X, int Y)
{
    int Result{};
    Result = X + Y;
    Func2(Result, X, Y);
    return Result;
}

int main()
{
    int X{ 10 };
    int Y{ 20 };
    int Z{};
    Z = Func1(X, Y);
    std::cout << Z << std::endl;
    return 0;
}

/* What typically happens when main calls Func1 (or any Function calls another) ?
    There are other ways to acheive the same Results :)

    main:
        push space for the return value
        push space for the parameters
        push the return address
        transfer control to Func1 (jmp)
    Func1:
        push the address of the previous activation record
        push any register values that will need to be restored before returning to the caller
        perform the code in Func1
        restore the register values
        restore the previous activation record (move the stack pointer)
        store any Function Result
        transfer control to the return address (jmp)
    main:
        pop the parameters
        pop the return value
*/
