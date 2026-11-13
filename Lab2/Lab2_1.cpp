#include <iostream>
using namespace std;
int main() {
    // Replace each type comment with a suitable whole-number type.
    unsigned int totalSeconds;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    cin >> totalSeconds;
    // Complete the arithmetic expressions.
    hours = totalSeconds / 3600;
    minutes = totalSeconds / 60 - 60*hours;
    seconds = totalSeconds - 3600*hours - 60*minutes;
    cout << "Hours: " << hours << '\n';
    cout << "Minutes: " << minutes << '\n';
    cout << "Seconds: " << seconds << '\n';
    return 0;
}