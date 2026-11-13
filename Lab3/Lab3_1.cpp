#include <iostream>

using namespace std;

int main() {
    int number;
    string message;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    // Write logic to detect an even number inside the parentheses
    if (number % 2 == 0) {
        message = " is an EVEN number.";
    } 
    else {
        message = " is an ODD number.";
    }
    
    cout << number << message;
    return 0;
}