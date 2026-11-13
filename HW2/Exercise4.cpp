//***********************************************************
// Name: Tom Phan
// Title: Exercise4.cpp
// Description: Input three names, output list of these names in alphabetical order
// Date: 9/17/2026
//***********************************************************

#include <iostream>

using namespace std;

int main() {
    
    cout << "Type three names here.\n";
    string a, b, c;
    cin >> a >> b >> c;
    
    cout << "The names are (sorted): ";
    
    if (a <= b) {
        if (b <= c) cout << a << ", " << b << ", " << c;
        else if (a <= c) cout << a << ", " << c << ", " << b;
        else cout << c << ", " << a << ", " << b;
    } else {
        if (a <= c) cout << b << ", " << a << ", " << c;
        else if (b <= c) cout << b << ", " << c << ", " << a;
        else cout << c << ", " << b << ", " << a;
    }
    
    return 0;
}