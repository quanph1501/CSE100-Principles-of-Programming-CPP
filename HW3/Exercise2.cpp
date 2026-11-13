//***********************************************************
// Name: Tom Phan
// Title: Exercise2.cpp
// Description: Input an integer and displays a sequence of 
//              arithmetic operations until it gets to one
// Date: 10/02/2026
//***********************************************************


#include <iostream>
using namespace std;
int main() {
    
    int a;
    cout << "Type one integer here." << endl;
    cin >> a;
    cout << a << " ";
    
    while (a > 1) {
        if (a%2 == 1) a = a*3 + 1;
        else a = a/2;
        cout << a << " ";
    }
    
    return 0;
}