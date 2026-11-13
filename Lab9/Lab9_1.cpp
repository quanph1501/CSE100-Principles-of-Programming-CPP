//***********************************************************
// Name: Tom Phan
// Title: Lab9_1.cpp
// Description: total and largest value of an array of integers. 
// Date: 10/27/2026
//***********************************************************
#include <iostream>
using namespace std;

int arrayTotal(const int values[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += values[i];
    return sum;
}

int arrayLargest(const int values[], int size) {
    int max = values[0];
    for (int i = 1; i < size; i++)
        if (values[i] > max) max = values[i];
    return max;
}

int main() {
    const int SIZE = 5;
    int values[SIZE];
    for (int i = 0; i < SIZE; i++)
        cin >> values[i];

    cout << "Total: " << arrayTotal(values, SIZE) << '\n';
    cout << "Largest: " << arrayLargest(values, SIZE) << '\n';
    return 0;
}
