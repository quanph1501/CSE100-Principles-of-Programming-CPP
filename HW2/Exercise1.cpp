//***********************************************************
// Name: Tom Phan
// Title: Exercise1.cpp
// Description: Input two integers, output whether sum of them is positive or not
// Date: 9/17/2026
//***********************************************************

#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    cout << "Type two integers here." << endl;
    cin >> a >> b;
    
    int c = a + b;
    if (c > 0) cout << "The sum of two integers is: Positive" << endl;
    else cout << "The sum of two integers is: Not Positive" << endl;
    
    return 0;

}