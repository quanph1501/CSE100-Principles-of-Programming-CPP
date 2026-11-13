#include <iostream>
using namespace std;
int main() {
    int miles;
    int totalMiles = 0;
    int hikeCount = 0;
    
    cin >> miles;
    
    while (miles != -1) {
        totalMiles += miles;
        hikeCount++;
        cin >> miles;
    }
    
    cout << "Hikes: " << hikeCount << endl;
    cout<< "Total miles: " << totalMiles;
    return 0;
}