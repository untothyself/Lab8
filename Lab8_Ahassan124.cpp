
/**
 * @file Lab8_Ahassan124.cpp
 * @author Abass Hassan
 * @date 2026-10-27
 * @brief Explores how stack and heap memory work
 *        using pointers and references.
 */

#include <iostream>
using namespace std;

/**
 * @brief Runs the program to compare stack and heap memory.
 * @return 0 if the program finishes successfully.
 */
int main()
{
    // Create a regular integer in the stack.
    int stackInt = 10;

    // Create an integer on the heap with a starting value of 20.
    int *heapInt = new int(20);

    // Point to the stack variable so we can access it another way.
    int* ptrToStack = &stackInt;

    // Give stackInt another name using a reference.
    int& refToStack = stackInt;

    // Clean up the heap memory when we are done using it.
    delete heapInt;
    heapInt = nullptr;
    return 0;
}
