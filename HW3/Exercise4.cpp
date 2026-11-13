//***********************************************************
// Name: Tom Phan
// Title: Exercise4.cpp
// Description: Input A, B, and C grade characters until Q, 
//              and displays the average GPA score
// Date: 10/02/2026
//***********************************************************

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    int counter = 0;
    double sum = 0.0;
    char grade;
    cout << "Type one letter grade or Q (quit)." << endl;
    cin >> grade;
    
    while (grade != 'Q') {
        switch (grade) {
            case 'A':
                sum += 4;
                break;
            case 'B':
                sum += 3;
                break;
            case 'C':
                sum += 2;
                break;
        }
        counter++;
        cout << "Type one letter grade or Q (quit)." << endl;
        cin >> grade;
    }
    cout << "Your GPA is: " << fixed << setprecision(2) << sum/counter;
    
    return 0;
}