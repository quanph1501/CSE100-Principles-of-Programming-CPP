#include <iostream>
using namespace std;
// No worries about the function
// This function "sortTrio" takes 3 integers as input and sorts
// them in-place

void sortTrio(int &a, int &b, int &c) {
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // sortTrio function sorts a, b and c in-place
    sortTrio(a, b, c);
    // After invocation sortTrio(a, b, c), we get: a <= b <= c
    // Set the conditions for d so that it finds it right position
    if (d <= a) cout << d << ", " << a << ", " << b << ", " << c << endl;
    else if ((d > a) && (d <= b)) cout << a << ", " << d << ", " << b << ", " << c << endl;
    else if ((d > b) && (d <= c)) cout << a << ", " << b << ", " << d << ", " << c << endl;
    else cout << a << ", " << b << ", " << c << ", " << d << endl;
    return 0;
}