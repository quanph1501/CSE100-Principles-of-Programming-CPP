//***********************************************************
// Name: Tom Phan
// Title: Lab7_1.cpp
// Description: Finding sum of digits of an integer
// Date: 10/6/2026
//***********************************************************
#include <iostream>

using namespace std;

int digitSum(int input) {
    int sum = 0;
    while (input >= 1) {
        sum += input % 10;
        input /= 10;
    }
    return sum;
}

int main()
{
    int number;
    cin >> number;
    cout << "Digit sum is " << digitSum(number) << endl;

    return 0;
}