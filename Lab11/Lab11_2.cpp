//***********************************************************
// Name: Tom Phan
// Title: Lab11_2.cpp
// Description: Simple binary search 
// Date: 11/10/2026
//***********************************************************
#include <iostream>
using namespace std;
int binarySearch(const int values[], int size, int target) {
    int left = 0;
    int right = size-1;
    while (left <= right) {
        int mid = (left+right)/2;
        if (values[mid] == target) return mid;
        else if (values[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
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
    cout << "Index: " << binarySearch(values, count, target) << '\n';
    return 0;
}