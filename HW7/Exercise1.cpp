//***********************************************************
// Name: Tom Phan
// Title: Exercise1.cpp
// Description: Simple playing card game
// Date: 11/13/2026
//***********************************************************
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
                int pos1, pos2;
                cin >> pos1 >> pos2;
                myCards.change(pos1, pos2);
                cout << myCards.getHistory() << endl;
                break;
            case 'C':
                cout<<"C [Reverse]:" <<endl;
                myCards.reverse();
                cout << myCards.getHistory() << endl;
                break;
            case 'D':
                cout<<"D [Move]: " <<endl;
                myCards.move();
                cout << myCards.getHistory() << endl;
                break;
            case 'E':
                cout<< "E [Search]: Type a value to search " << endl;
                int target;
                cin >> target;
                int idx;
                idx = myCards.search(target);
                if (idx == -1) cout << target << " is not found" << endl;
                else if (idx == 0) cout << target << " is 1st item" << endl;
                else if (idx == 1) cout << target << " is 2nd item" << endl;
                else if (idx == 2) cout << target << " is 3rd item" << endl;
                else cout << target << " is " << idx+1 << "th item" << endl;
                break;
            case 'F':
                cout<<"F [Bubble Sort]: " <<endl;
                myCards.bubbleSort(false);
                cout << myCards.getHistory() << endl;
                break;
            case 'G':
                cout<<"G [Selection Sort]: " <<endl;
                myCards.selectionSort(false);
                cout << myCards.getHistory() << endl;
                break;
            case 'H' :
                cout<<"H [Bubble Sort (Debug)]: " <<endl;
                myCards.bubbleSort(true);
                cout << myCards.getHistory() << endl;
                break;
            case 'I':
                cout<<"I [Selection Sort (Debug)]: " <<endl; 
                myCards.selectionSort(true);
                cout << myCards.getHistory() << endl;
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