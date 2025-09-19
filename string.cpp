#include <iostream>
#include <cstring>   // for strlen
using namespace std;

int main() {
    int size;

    // Step 1: Ask user for string length
    cout << "Enter maximum length of string: ";
    cin >> size;

    // Allocate memory dynamically (+1 for null terminator '\0')
    char *str = new char[size + 1];

    // Step 2: Take input string
    cout << "Enter a string: ";
    cin.ignore();  // clear leftover newline from input buffer
    cin.getline(str, size + 1);

    // Step 3: Reverse string in place
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Step 4: Display reversed string
    cout << "Reversed string: " << str << endl;

    // Step 5: Free allocated memory
    delete[] str;

    return 0;
}
