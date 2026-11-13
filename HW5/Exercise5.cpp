//***********************************************************
// Name: Tom Phan
// Title: Exercise5.cpp
// Description: Develop a class Point3D and Sphere3D, which has the instance variables and functions,
//              test the class by making a test program 
// Date: 10/16/2026
//***********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979323846; 

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

class Sphere3D {
    private:
        Point3D center;
        double radius;
    public:
        Sphere3D(Point3D _p, double _r) {
            center = _p;
            radius = _r;
        }
        double calcVolume() {
            return (4.0/3.0)*PI*radius*radius*radius;
        }
        double calcArea() {
            return 4.0*PI*radius*radius;
        }
};
int main() {
    
    char cmd;
    double a, b, c, r;
    while (true) {
        cout << "Choose Menu. A:Set Sphere3D, Q:Quit" << endl;
        cin >> cmd;
        if (cmd == 'A') {
            cout << "Input X, Y, and Z values for center of sphere." << endl;
            cin >> a >> b >> c;
            Point3D p1(a, b, c);
            cout << "Input radius of sphere." << endl;
            cin >> r;
            Sphere3D s1(p1, r);
            cout << fixed << setprecision(2) << "Sphere:(" << a << ", " << b << ", " << c 
                 << "), radius:" << r << ", volume:" << s1.calcVolume() << ", area:" << s1.calcArea() << endl;
        }
        else if (cmd == 'Q') break;
        else cout << "Invalid Input. Try Again." << endl;
    }
    return 0;
}