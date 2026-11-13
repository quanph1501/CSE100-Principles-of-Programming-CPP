//***********************************************************
// Name: Tom Phan
// Title: Exercise1.cpp
// Description: Input an integer, output list of numbers from zero to the int
// Date: 10/02/2026
//***********************************************************


#include <iostream>
using namespace std;
int main() {
    
    int a;
    cout << "Type one integer here." << endl;
    cin >> a;
    
    for (int i = 0; i <= a; i++) 
        cout << i <<" ";
        
    cout << endl;
    
    return 0;
}