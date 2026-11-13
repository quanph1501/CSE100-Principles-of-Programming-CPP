#include <iostream>

using namespace std;

int main() {
    int year;
    string message;
    
    cout << "Enter a year: ";
    cin >> year;
    
    // Year 1100 is not a leap year, but 1200 is a leap year
    // Again, 1300, 1400, 1500 are not leap year, but 1600 is a leap year
    // Thus, a year divisible by 400 will be leap year
    // But, year divisible by 100 and NOT divisible by 400 is NOT a leap year
    // For rest of the years, divisibility by 4 indicates leap year
    
    if (year % 4 == 0) {
        if ((year % 100 == 0) && (year % 400 != 0)) message = "Not a leap year.";
        else message = "Leap year.";
    }
    else message = "Not a leap year.";
    
    cout << message << endl;
    return 0;
}