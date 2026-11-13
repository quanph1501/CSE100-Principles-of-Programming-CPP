//***********************************************************
// Name: Tom Phan
// Title: Lab6_1.cpp
// Description: Finding factors of each number in a range
// Date: 9/29/2026
//***********************************************************

#include <iostream>

using namespace std;

int main() {
    
    int start, end;
    cin >> start >> end;
    
    for (int iterator = start; iterator <= end; iterator++) {
        cout << "Factors of " << iterator << " = [" << 1;
        
        for (int num = 2; num < iterator; num++) 
            if (iterator % num == 0) cout << ", " << num;
        
        cout << ", " << iterator << "]" << endl;
    }
    return 0;
}