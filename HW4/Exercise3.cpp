//***********************************************************
// Name: Tom Phan
// Title: Exercise3.cpp
// Description: Count # of special characters in a string
// Date: 10/7/2026
//***********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int countSpecial(string str) {
    int out = 0;
    for (int i = 0; i < str.length(); i++) 
        if (!(isalnum(str.at(i)))) out++;
    return out;
}

int main() {
    string a;
    cout << "Type one word here." << endl;
    cin >> a;
    cout << "# of Specials is: "<< countSpecial(a) << endl;
    return 0;
}