// Name: Tom Phan
// Title: Exercise5.cpp
// Description: Real number display manipulation
// Date: 09/11/2026

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double num;
    
    cout << "Type one real number here.\n";
    cin >> num;
    
    string asterisk_line;
    asterisk_line.assign(45, '*');
    cout << asterisk_line << endl;
    
    cout << setw(15) << left << scientific << num 
         << setw(30) << "E-Note (scientific)"<< endl;
         
    cout << setw(15) << left << defaultfloat << setprecision(3) << num 
         << setw(30) << "3 significant figures"<< endl;
         
    cout << setw(15) << left << fixed << setprecision(2) << num 
         << setw(30) << "Fixed 2 decimal digits"<< endl;
         
    cout << setw(15) << left << fixed << setprecision(4) << num 
         << setw(30) << "Fixed show 4 decimal digits"<< endl;
         
    cout << asterisk_line;
    
    return 0;
}