// Name: Tom Phan
// Title: Exercise3.cpp
// Description: Input three integers, output average of them
// Date: 09/11/2026


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b, c;
    cout << "Type three integers here.\n";

    cin >> a >> b >> c;
    double avg = (a + b + c) / 3.0;

    cout << "The average of three integers is: " << fixed << setprecision(2) << avg << endl;

    return 0;
}