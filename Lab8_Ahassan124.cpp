
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

    // Show the stack variable's value and address.
    cout << "Stack Variable (stackInt):" << endl;
    cout << "Value: " << stackInt << endl;
    cout << "Address: " << &stackInt << endl << endl;

    // Show the value and address of the integer on the heap.
    cout << "Heap Variable (heapInt):" << endl;
    cout << "Value: " << *heapInt << endl;
    cout << "Address: " << heapInt << endl << endl;

    // Show what our pointer stores and points to.
    cout << "Pointer to Stack (ptrToStack):" << endl;
    cout << "Value Pointed To: " << *ptrToStack << endl;
    cout << "Address Stored: " << ptrToStack << endl << endl;

    // Show the value and address using our reference.
    cout << "Reference to Stack (refToStack):" << endl;
    cout << "Value Referred To: " << refToStack << endl;
    cout << "Address: " << &refToStack << endl << endl;

    // Change stackInt through the pointer.
    *ptrToStack = 15;

    cout << "\nAfter changing the value through the pointer:" << endl;
    cout << "stackInt: " << stackInt << endl;
    cout << "ptrToStack: " << *ptrToStack << endl;
    cout << "refToStack: " << refToStack << endl;

    // Change the same integer using its reference.
    refToStack = 25;

    cout << "\nAfter changing the value through the reference:" << endl;
    cout << "stackInt: " << stackInt << endl;
    cout << "ptrToStack: " << *ptrToStack << endl;
    cout << "refToStack: " << refToStack << endl;

    // Clean up the heap memory when we are done using it.
    delete heapInt;
    heapInt = nullptr;
    return 0;
}
