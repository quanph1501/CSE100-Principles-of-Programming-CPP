//***********************************************************
// Name: Tom Phan
// Title: Lab12_1.cpp
// Description: Anagrams check program
// Date: 11/17/2026
//***********************************************************
#include <iostream>
using namespace std;

string sortString(string str) {
    string sorted_str;
    while (str.length() > 0) {
        int min = 0;
        for (int i=0; i < str.length(); i++) {
            if (str[i] < str[min]) 
                min = i;
        }
        sorted_str += str[min];
        str.erase(min, 1);
    }
    return sorted_str;
}
bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) 
        return false;
    if (str1 == str2)
        return true;
    str1 = sortString(str1);
    str2 = sortString(str2);
    if (str1 == str2) 
        return true;
}
int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }
    return 0;
}