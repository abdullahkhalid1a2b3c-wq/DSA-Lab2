#include <iostream>
using namespace std;

// Part 1: Function to analyze a pointer
void analyze_pointer(int *ptr) {
    cout << "Memory address: " << ptr << endl;
    cout << "Value at address: " << *ptr << endl;
}

int main() {
    // Part 2: Stack allocation
    int iValue = 42;                // stack variable
    analyze_pointer(&iValue);       // pass address

    cout << "-------------------" << endl;

    // Part 2: Heap allocation
    int *hValue = new int;          // allocate memory on heap
    *hValue = 99;                   // assign value
    analyze_pointer(hValue);        // pass pointer

    // Clean up heap memory
    delete hValue;

    return 0;
}
