//***********************************************************
// Name: Tom Phan
// Title: Exercise3.cpp
// Description: Input one letter, output type of that character
// Date: 9/17/2026
//***********************************************************

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    
    cout << "Type one letter here.\n";
    char ch = cin.get();
    
    if (islower(ch)) cout << "\"" << ch << "\" is Lowercase";
    else if (isupper(ch)) cout << "\"" << ch << "\" is Uppercase";
    else if (isdigit(ch)) cout << "\"" << ch << "\" is Numeric";
    else cout << "\"" << ch << "\" is Other";
    
    
    return 0;
}