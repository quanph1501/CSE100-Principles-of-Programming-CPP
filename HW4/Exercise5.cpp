//***********************************************************
// Name: Tom Phan
// Title: Exercise5.cpp
// Description: Password strength check
// Date: 10/9/2026
//***********************************************************
#include <iostream>

using namespace std;

int countUpper(string str) {
    int out = 0;
    for (int i = 0; i < str.length(); i++) 
        if (isupper(str.at(i))) out++;
    return out;
}
int countLower(string str) {
    int out = 0;
    for (int i = 0; i < str.length(); i++) 
        if (islower(str.at(i))) out++;
    return out;
}
int countDigit(string str) {
    int out = 0;
    for (int i = 0; i < str.length(); i++) 
        if (isdigit(str.at(i))) out++;
    return out;
}
int countSpecial(string str) {
    int out = 0;
    for (int i = 0; i < str.length(); i++) 
        if (!(isalnum(str.at(i)))) out++;
    return out;
}
int main() {
    do {
        int strength = 0;
        string input;
        
        cout << "Type one password here." << endl;
        getline(cin, input);
        
        if (input.length() == 0) break;
        if (countUpper(input)) strength++;
        if (countLower(input)) strength++;
        if (countDigit(input)) strength++;
        if (countSpecial(input)) strength++;
        if (input.length() < 8) strength = 0;
        
        cout << "Strength of Password is: " << strength << endl;
    } while(true);
    
    cout << "***END***"<<endl;

    return 0;
}