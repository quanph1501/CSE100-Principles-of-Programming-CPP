// Name: Tom Phan
// Title: Exercise2.cpp
// Description: Input two integers, output their division and remainder
// Date: 09/11/2026

#include <iostream>

using namespace std;

int main() {
   
    int a, b;
    cout << "Type two integers here.\n";
    cin >> a >> b;

    int division = a / b, remain = a % b;
    cout << a << " divided by " << b << " is " << division << " with a remainder of " << remain << endl;
    
    return 0;
}