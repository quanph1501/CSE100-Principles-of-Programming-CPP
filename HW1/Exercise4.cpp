// Name: Tom Phan
// Title: Exercise4.cpp
// Description: Input total of cents, output minimal total # of coins
// Date: 09/11/2026


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int totalCents, quarter, dime, nickel, penny;
    
    cout << "Type one integer here.\n";
    cin >> totalCents;
    
    quarter = totalCents / 25; 
    totalCents %= 25;
    
    dime = totalCents / 10;
    totalCents %= 10;
    
    nickel = totalCents / 5;
    totalCents %= 5;
    
    penny = totalCents;
    
    cout << "************\n";
    
    cout << "Quarter:" << right << setw(4) << quarter << endl;
    cout << "Dime:" << right << setw(7) << dime << endl;
    cout << "Nickel:" << right << setw(5) << nickel << endl;
    cout << "Penny:" << right << setw(6) << penny << endl;
    
    cout << "------------\n";
    
    cout << "Total" << right << setw(7) << (quarter+dime+nickel+penny) << endl;
    
    cout << "************";
    return 0;
}