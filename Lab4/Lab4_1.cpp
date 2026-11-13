#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    // Check if a is less than or equals to b
    if (a <= b) {
        // Inside this block: a <= b
        // Check if b is less than or equals to c
        if (b <= c) {
            // Inside this block: a <= b <= c
            cout << a << ", " << b << ", " << c << endl;
        } else {
            // Inside this block: c < b
            // Check if a is less than or equals to c
            if (a <= c) {
                // Inside this block: a <= c < b
                cout << a << ", " << c << ", " << b << endl;
            } else {
                // Inside this block: c < a <= b
                cout << c << ", " << a << ", " << b << endl;
            }
        }
    } else {
        // Inside this block: b < a
        // Check if a is less than or equals to c
        if (a <= c) {
            // Inside this block: b < a <= c
            cout << b << ", " << a << ", " << c << endl;
        } else {
            // Inside this block: b < a and c < a
            // Check if b is less than or equals to c
            if(b <= c) {
                // Inside this block: b <= c < a
                cout << b << ", " << c << ", " << a << endl;
            } else {
                // Inside this block: c < b < a
                cout << c << ", " << b << ", " << a << endl;
            }
        }
    }
    return 0;
}
