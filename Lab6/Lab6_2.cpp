//***********************************************************
// Name: Tom Phan
// Title: Lab6_2.cpp
// Description: Find all prime numbers within a range
// Date: 9/29/2026
//***********************************************************
#include <iostream>

using namespace std;

int main() {
    
    int start, end;
    cin >> start >> end;
    
    bool isPrime = true;
    for (int number = start; number <= end; number++) {
        isPrime = true;
        for (int divisor = 2; divisor < number; divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << number << " ";
    }
    
    cout << endl;
    return 0;
}