//***********************************************************
// Name: Tom Phan
// Title: Exercise3.cpp
// Description: Develop a class BankAccount, which has the instance variables and functions,
//              test the class by making a test program 
// Date: 10/16/2026
//***********************************************************

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class BankAccount {
    private:
        int id;
        double amount;
        double rate;
    public:
        void setID(int _id) { id = _id; }
        void setRate(double _r) { rate = _r; }
        void setAmount(double _amt) { amount = _amt; }
        double amountAfter10Years() {
            return amount*pow(1+rate, 10);
        }
        void toString() {
            cout << fixed << setprecision(2) << "Current:$" << amount << ", 10-Years:$" << amountAfter10Years() << endl;
        }
};
int main() {
    BankAccount ba1;
    char cmd;
    double input;
    while (true) {
        cout << "Choose Menu. A:Set ID, B:Set Amount, C:Set Rate, Q:Quit" << endl;
        cin >> cmd;
        if (cmd == 'A') {
            cout << "Set ID." << endl;
            cin >> input;
            ba1.setID(int(input));
            ba1.toString();
        }
        else if (cmd == 'B') {
            cout << "Set the amount." << endl;
            cin >> input;
            ba1.setAmount(input);
            ba1.toString();
        }
        else if (cmd == 'C') {
            cout << "Set the rate." << endl;
            cin >> input;
            ba1.setRate(input);
            ba1.toString();
        }
        else if (cmd == 'Q') break;
        else cout << "Invalid Input. Try Again." << endl;
    }
    return 0;
}