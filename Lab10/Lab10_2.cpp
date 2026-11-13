//***********************************************************
// Name: Tom Phan
// Title: Lab10_2.cpp
// Description: Check if the first string contains the second string
// Date: 11/03/2026
//***********************************************************
#include <iostream>

using namespace std;

// Following function takes two strings as inputs
// Then the function checks if the first string contains the second one
// If the second string appears in the first string
// 		Then the function returns the index where it first appears
// 		Otherwise, it returns -1
// TODO: Implement the function.
int substringSearch(const string text, const string substring) {
    for (int i = 0; i <= text.length() - substring.length(); i++) {
        bool match = true;
        for (int j = 0; j < substring.length(); j++)
            if (text[i + j] != substring[j]) {
                match = false;
                break;
            }
        
        if (match) return i;
    }
    return -1;
}

int main() {
    string text;
    string substring;
    getline(cin, text);
    getline(cin, substring);
    
    if(substringSearch(text, substring) == -1) {
        cout << substring
             << " does NOT appear in "
             << text
             << endl;
    } else {
        cout << substring
             << " appears in "
             << text
             << " at index "
             << substringSearch(text, substring)
             << endl;
    }

    return 0;
}
