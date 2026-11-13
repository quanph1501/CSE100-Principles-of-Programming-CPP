//***********************************************************
// Name: Tom Phan
// Title: Exercise5.cpp
// Description: Short description should be typed here.
// Date: 9/17/2026
//***********************************************************
#include <iostream>

using namespace std;

int main() {
    
    cout << "Type three integers here.\n";
    
    int a, b, c;
    cin >> a >> b >> c;
    
    if ((a < 0) || (a > 100) || (b < 0) || (b > 100) || (c < 0) || (c > 100)) {
        cout << "Invalid input is included";
        return 0;
    }
    
    cout << "Your inputs are (sorted): ";
    
    if (a >= b) {
        if (b >= c) cout << a << ", " << b << ", " << c << endl;
        else if (a >= c) cout << a << ", " << c << ", " << b << endl;
        else cout << c << ", " << a << ", " << b << endl;
    } else {
        if (a >= c) cout << b << ", " << a << ", " << c << endl;
        else if (b >= c) cout << b << ", " << c << ", " << a << endl;
        else cout << c << ", " << b << ", " << a << endl;
    }

    return 0;
}