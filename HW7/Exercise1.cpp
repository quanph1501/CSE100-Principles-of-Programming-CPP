#include <iostream>
#include "CardList.h"
using namespace std;

void printMenu() {
    cout << "\nCommand Options\n"
    << "-----------------------------------\n"
    << "A: create a new list\n"
    << "B: change the elements\n"
    << "C: reverse the elements\n"
    << "D: move the elements\n"
    << "E: search e value\n"
    << "F: bubble sort\n"
    << "G: selection sort\n"
    << "H: bubble sort(Debug Mode)\n"
    << "I: selection sort(Debug Mode)\n"
    << "?: display the menu\n"
    << "Q: quit this program\n" << endl;
} // end of the printMenu method
int main(){
    char command;
    int num1, num2, num3, num4, num5;
    cout << "*** Start of Program ***\n" << endl;
    CardList myCards(0, 0, 0, 0, 0);
    do {
        // ask a user to choose a command
        cout << "[Please enter a command or ?] "<< endl;
        cin >> command;
        command = toupper(command);
        cin.ignore(20, '\n');
        switch(command){
            case 'A':
                cout<<"A [New]: Type 5 Integers " <<endl;
                cin >> num1 >> num2 >> num3 >> num4 >> num5;
                myCards = CardList(num1, num2, num3, num4, num5);
                cout << myCards.getHistory() << endl;
                break;
            case 'B':
                cout<<"B [Change]: Type 2 Positions to swap " <<endl;
                break;
            case 'C':
                cout<<"C [Reverse]:" <<endl;
                break;
            case 'D':
                cout<<"D [Move]: " <<endl;
                break;
            case 'E':
                cout<<"E [Search]: Type a value to search " <<endl;
                break;
            case 'F':
                cout<<"F [Bubble Sort]: " <<endl;
                break;
            case 'G':
                cout<<"G [Selection Sort]: " <<endl;
                break;
            case 'H' :
                cout<<"H [Bubble Sort (Debug)]: " <<endl;
                break;
            case 'I':
                cout<<"I [Selection Sort (Debug)]: " <<endl; 
                break;
            case '?' :
                printMenu();
                break;
            case 'Q':
                break;
            default:
                cout << "[Invalid input] " << endl;
                break;
        }
    } while (command != 'Q');
    cout << "*** End of Program ***" << endl; 
    return 0;
}