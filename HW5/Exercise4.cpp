//***********************************************************
// Name: Tom Phan
// Title: Exercise4.cpp
// Description: Develop a class Point3D, which has the instance variables and functions,
//              test the class by making a test program 
// Date: 10/16/2026
//***********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

class Point3D {
    public:
        double x;
        double y;
        double z;
        Point3D() {
            x = 0;
            y = 0;
            z = 0;
        }
        Point3D(double _x, double _y, double _z) {
            x = _x;
            y = _y;
            z = _z;
        }
};
int main() {
    char cmd;
    double a, b, c;
    while (true) {
        cout << "Choose Menu. A:Set Point3D, Q:Quit" << endl;
        cin >> cmd;
        if (cmd == 'A') {
            cout << "Input X, Y, and Z values." << endl;
            cin >> a >> b >> c;
            Point3D p1(a, b, c);
            cout << fixed << setprecision(2) << "P:(" << a << ", " << b << ", " << c << ")" << endl;
        }
        else if (cmd == 'Q') break;
        else cout << "Invalid Input. Try Again." << endl;
    }
    return 0;
}