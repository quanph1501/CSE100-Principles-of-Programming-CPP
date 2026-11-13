//***********************************************************
// Name: Tom Phan
// Title: Lab10_1.cpp
// Description: Check if the input string is a palindrom
// Date: 11/03/2026
//***********************************************************
#include <iostream>

using namespace std;

// Following function takes a string as input
// And returns "true" if the input string is a palindrom and "false" otherwise.
// TODO: implement the function.
bool isPalindrom(const string input) {
    int left = 0;
    int right = input.length() - 1;
    while(left < right) {
        if(input[left] != input[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    getline(cin, input);
    
    if(isPalindrom(input)) {
        cout << input << " is a palindrom." << endl;
    } else {
        cout << input << " is not a palindrom." << endl;
    }

    return 0;
}
