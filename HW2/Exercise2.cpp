//***********************************************************
// Name: Tom Phan
// Title: Exercise2.cpp
// Description: Input two real numbers, output determines what number is bigger or they are same
// Date: 9/16/2026
//***********************************************************

#include <iostream>

using namespace std;

int main() {
    
    cout << "Type two values here.\n";
    
    double a, b;
    cin >> a >> b;
    
    if (a > b) cout << "The first input is bigger";
    else if (b > a) cout << "The second input is bigger";
    else cout << "Two inputs are same";
    
    return 0;
}