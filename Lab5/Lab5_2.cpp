#include <iostream>
using namespace std;
int main() {
    int scoreCount;
    int score;
    int total = 0;
    int passingCount = 0;
    
    cin >> scoreCount;
    for (int i = 0; i < scoreCount; i++) {
        cin >> score;
        total += score;
        if (score >= 70) passingCount++;
    }
    
    cout << "Total: " << total << endl;
    cout << "Passing scores: " << passingCount;
    
    return 0;
}