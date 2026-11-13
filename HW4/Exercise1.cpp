//***********************************************************
// Name: Tom Phan
// Title: Exercise1.cpp
// Description: Count # of alphabetical characters in a string
// Date: 10/7/2026
//***********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

int countAlpha(string str) {
int out=0;
    for (int i = 0; i < str.length(); i++) 
        if (isalpha(str.at(i))) out++;
    return out;
}

int main() {
    string a;
    cout << "Type one word here." << endl;
    cin >> a;
    cout << "# of Alphabets is: "<< countAlpha(a) << endl;
    return 0;
}