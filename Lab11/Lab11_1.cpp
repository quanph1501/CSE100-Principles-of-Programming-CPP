//***********************************************************
// Name: Tom Phan
// Title: Lab11_1.cpp
// Description: Linear search
// Date: 11/10/2026
//***********************************************************
#include <iostream>
using namespace std;

int linearSearch(const int values[], int size, int target) {
    for (int i=0; i < size; i++) 
        if (target == values[i]) return i;
    return -1; // Return -1 when the search interval is empty.
}

int main() {
    const int CAPACITY = 10;
    int values[CAPACITY] = {};
    int count, target;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> values[i];
    }
    cin >> target;
    cout << "Index: " << linearSearch(values, count, target) << '\n';
    return 0;
}