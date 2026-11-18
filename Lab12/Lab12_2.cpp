//***********************************************************
// Name: Tom Phan
// Title: Lab12_2.cpp
// Description: Find the element with the max frequency
// Date: 11/17/2026
//***********************************************************
#include <iostream>
using namespace std;
int maxFrequencyElement(int arr[], int size) {
    int max=0, count=0, prev_count=0;
    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++)
            if (arr[i] == arr[j]) count++;
        if (count > prev_count) { 
            max = i;
            prev_count = count;
        }
        count = 0;
    }
    return arr[max];
}
int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    // cout << "Enter the number of elements: ";
    cin >> size;
    if (size <= 0 || size > MAX_SIZE) {
        // cout << "Invalid array size." << endl;
        return 1;
    }
    // cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int result = maxFrequencyElement(arr, size);
    cout << "Element with maximum frequency: " << result << endl;
    return 0;
}