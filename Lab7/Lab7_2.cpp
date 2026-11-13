//***********************************************************
// Name: Tom Phan
// Title: Lab7_2.cpp
// Description: Check an integer whether it's prime or composite
// Date: 10/6/2026
//***********************************************************
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int input) {
    bool res = true;
    const int limit = sqrt(input);
    for (int i = 2; i < limit; i++) {
        if (input % i == 0) {
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    int number;
    cin >> number;
    cout << number << (isPrime(number) ? " is a prime!!" : " is a composite!!") << endl;

    return 0;
}