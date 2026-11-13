//***********************************************************
// Name: Tom Phan
// Title: Exercise3.cpp
// Description: Input positive integers until
//              negative integer (-1). Output the total.
// Date: 10/02/2026
//***********************************************************


#include <iostream>
using namespace std;
int main() {
    
    int a, sum = 0;
    cout << "Type one positive integer or -1 (quit)." << endl;
    cin >> a;
    
    while (a >= 0) {
        sum += a;
        cout << "Type one positive integer or -1 (quit)." << endl;
        cin >> a;
    }
    cout << "Total: " << sum;
    
    return 0;
}