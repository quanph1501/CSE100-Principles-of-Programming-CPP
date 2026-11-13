//***********************************************************
// Name: Tom Phan
// Title: Exercise1.cpp
// Description: Program to do fraction calculations algebraically
// Date: 10/30/2026
//***********************************************************

#include <iostream>
#include "Fraction.h"

void printMenu() {
    cout << "Command Options\n"
         << "-----------------------------------\n"
         << "c: reset the value\n"
         << "+: add a fraction to the current value\n"
         << "-: subtract a fraction from the current value\n"
         << "*: multiply a fraction to the current value\n"
         << "/: divide the current value by a fraction\n"
         << "?: display the menu again\n"
         << "q: quit this program" << endl;
} // end of the printMenu method

int main(){
    char command; // menu-command
    int num1, num2; // numbers used for input in the various cases
    cout << "*** Start of Program ***" << endl;
    
    Fraction fractionA(0,1), fractionB(0,1);

    do {
    // ask a user to choose a command
    cout << "\n[Please enter a command] "<< endl;
    cin >> command;
    command = toupper(command);
    cin.ignore(20, '\n');
    switch(command){
        case 'C':
            cout << "[Fraction is reset as 0] " << endl;
            fractionA = Fraction(0,1);
            fractionB = Fraction(0,1);
            cout << fractionA.toString() << endl;
            break;
        case '*':
            cout <<"[Enter two numbers for a fraction to MULTIPLY] " <<endl;
            cin >> num1 >> num2;
            fractionB = Fraction(num1, num2);
            cout << fractionA.toString() + " * " + fractionB.toString() + " = "; 
            fractionA.multiply(fractionB);
            cout << fractionA.toString() << endl;
            break;
        case '/':
            cout << "[Enter two numbers for a fraction to DIVIDE] " <<endl;
            cin >> num1 >> num2;
            fractionB = Fraction(num1, num2);
            cout << fractionA.toString()+ " / " + fractionB.toString() + " = "; 
            fractionA.divide(fractionB);
            cout << fractionA.toString() << endl;
            break;
        case '+':
            cout << "[Enter two numbers for a fraction to ADD] " << endl;
            cin >> num1 >> num2;
            fractionB = Fraction(num1, num2);
            cout << fractionA.toString()+ " + " + fractionB.toString() + " = "; 
            fractionA.add(fractionB);
            cout << fractionA.toString() << endl;
            break;
        case '-':
            cout << "[Enter two numbers for a fraction to SUBTRACT] " <<endl;
            cin >> num1 >> num2;
            fractionB = Fraction(num1, num2);
            cout << fractionA.toString()+ " - " + fractionB.toString() + " = "; 
            fractionA.subtract(fractionB);
            cout << fractionA.toString() << endl;
            break;
        case '?':
            printMenu();
            break;
            case 'Q':
            break;
        default:
            cout << "[Invalid input] " << endl;
            break;
        }
    } while (command != 'Q');
    cout << "\n ****** End of Program ******" << endl;
    return 0;
}