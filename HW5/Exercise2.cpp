//***********************************************************
// Name: Tom Phan
// Title: Exercise2.cpp
// Description: Develop a class City, which has the instance variables and functions, 
//		and test the class by making a test program 
// Date: 10/16/2026
//***********************************************************

#include <iostream>

using namespace std;

class City {
    private:
        string name;
        int population;
    public:
        void setName(string _n) { name = _n; }
        void setPopulation(int _p) { population = _p; }
        string toString() {
            return "Name:" + name + " Population:" + to_string(population);
        }
};
int main() {
    City c1; //Instance Object
    char cmd; //command character A, B, C, or Q
    string input; // user input for setter functions
    while (true) {
        cout << "Choose Menu. A:Set Name, B:Set Population, Q:Quit" << endl;
        cin >> cmd;
        if (cmd == 'A') {
            cout << "Give the name of city." << endl;
            cin >> input;
            c1.setName(input);
            c1.setPopulation(0);
            cout << c1.toString() << endl;
        }
        else if (cmd == 'B') {
            cout << "Set the population of city." << endl;
            cin >> input;
            c1.setPopulation(stoi(input));
            cout << c1.toString() << endl;
        }
        else if (cmd == 'Q') break;
        else cout << "Invalid Input. Try Again." << endl;
    }
    return 0;
}