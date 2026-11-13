//***********************************************************
// Name: Tom Phan
// Title: Lab9_2.cpp
// Description: Reverse the elements of an array.
// Date: 10/27/2026
//***********************************************************
#include <iostream>
using namespace std;

void reverseCopy(const int original[], int reversed[], int count) {
    for (int i = 0; i < count; i++)
        reversed[i] = original[count - 1 - i];
}

void printArray(const int values[], int count) {
    for (int i = 0; i < count; i++)
        cout << values[i] << ' ';
    cout << endl;
}

int main() {
    const int CAPACITY = 10;
    int original[CAPACITY] = {}, reversed[CAPACITY] = {};
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
        cin >> original[i];

    reverseCopy(original, reversed, count);
    cout << "Original: ";
    printArray(original, count);
    cout << "Reversed: ";
    printArray(reversed, count);
    return 0;
}
