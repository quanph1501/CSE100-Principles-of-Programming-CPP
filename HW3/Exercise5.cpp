//***********************************************************
// Name: Tom Phan
// Title: Exercise5.cpp
// Description: Input one integer and output a triangle shape
//              with ‘*’ asterisks. 
// Date: 10/02/2026
//***********************************************************

#include <iostream>
using namespace std;
int main() {
    
    cout << "Type one integer here." << endl;
    int n;
    cin >> n;
    for (int i = 0; i<n; i++) {
        string a((n-i)*2 - 1, '*');
        string w(i, ' ');
        cout << w << a << endl;
    }

    return 0;
}