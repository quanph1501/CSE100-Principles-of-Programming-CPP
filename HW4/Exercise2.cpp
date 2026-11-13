//***********************************************************
// Name: Tom Phan
// Title: Exercise2.cpp
// Description: Count # of digits in a string
// Date: 10/7/2026
//***********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int countDigit(string str) {
    int out = 0;
    for (int i = 0; i < str.length(); i++) 
        if (isdigit(str.at(i))) out++;
    return out;
}

int main() {
    string a;
    cout << "Type one word here." << endl;
    cin >> a;
    cout << "# of Digits is: "<< countDigit(a) << endl;
    return 0;
}