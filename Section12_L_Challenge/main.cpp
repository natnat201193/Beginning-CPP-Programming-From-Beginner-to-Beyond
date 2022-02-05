// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

// Challenge
/* Write a C++ function named ApplyAll that expects two Arrays of integers and their sizes and
  dynamically allocates a new Array of integers whose size is the product of the 2 Array sizes

  The function should loop through the second Array and multiplies each element across each element of Array 1 and store the
  product in the newly created Array.

  The function should return a pointer to the newly allocated Array.

  You can also write a Print function that expects a pointer to an Array of integers and its size and display the
  elements in the Array.

  For example,

  Below is the output from the following code which would be in main:

    int Array1[] {1,2,3,4,5};
    int Array2[] {10,20,30};

    std::cout << "Array 1: " ;
    Print(Array1,5);

    std::cout << "Array 2: " ;
    Print(Array2,3);

    int *Results = ApplyAll(Array1, 5, Array2, 3);
    std::cout << "Result: " ;
    Print(Results,15);

   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/

#include <iostream>

// Function prototypes
int* ApplyAll(const int* const Arr1, size_t Size1, const int* const Arr2, size_t Size2);
void Print(const int* const Array, size_t size);

int main()
{
    const size_t Array1Size{ 5 };
    const size_t Array2Size{ 3 };

    const int Array1[]{ 1,2,3,4,5 };
    const int Array2[]{ 10,20,30 };

    std::cout << "Array 1: ";
    Print(Array1, Array1Size);

    std::cout << "Array 2: ";
    Print(Array2, Array2Size);

    int* Results = ApplyAll(Array1, Array1Size, Array2, Array2Size);
    constexpr size_t ResultsSize{ Array1Size * Array2Size };

    std::cout << "Result: ";
    Print(Results, ResultsSize);

    delete[] Results;
    std::cout << std::endl;
    return 0;
}

/*******************************************************************
This function expects:
    Arr1 - a pointer to an Array of integers
    Size1 - the number of integers in Arr1
    Arr2 - a pointer to another Array of integers
    Size2 - the number of integers in Arr2

    The function dynamically allocates a new Array that is of size = Size1 * Size2
    Then it loops through each element of Arr2 and multiples it across all the
    elements of Arr1 and each product is stored in the newly created Array
********************************************************************/
int* ApplyAll(const int* const Arr1, size_t Size1, const int* const Arr2, size_t Size2)
{
    int* NewArray{ new int[Size1 * Size2] };
    size_t Position{ 0 };
    for (size_t I{ 0 }; I < Size2; ++I)
    {
        for (size_t J{ 0 }; J < Size1; ++J)
        {
            NewArray[Position] = { Arr1[J] * Arr2[I]};
            ++Position;
        }
    }
    return NewArray;
}
/*******************************************************************
This function expects:
    Arr - a pointer to an Array of integers
    size - the number of integers in Arr

    The function loops through Arr and displays all the integers
    in the Array
********************************************************************/
void Print(const int* const Arr, size_t Size)
{
    std::cout << "[ ";
    for (size_t I{ 0 }; I < Size; ++I)
        std::cout << Arr[I] << " ";
    std::cout << "]" << std::endl;
}
