//***********************************************************
// Name: Tom Phan
// Title: Exercise4.cpp
// Description: Count # of trues in user input
// Date: 10/9/2026
//***********************************************************
#include <iostream>

using namespace std;

int countTrue(bool a, bool b, bool c, bool d) {
    return int(a) + int(b) + int(c) + int(d);
}

int main()
{
    bool a, b, c, d;
    cout << "Type four true/false values here." << endl;
    cin >> boolalpha >> a >> b >> c >> d;
    cout << "# of trues is: " << countTrue(a, b, c, d);

    return 0;
}