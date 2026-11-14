//***********************************************************
// Name: Tom Phan
// Title: CardList.cpp
// Description: Simple playing card game
// Date: 11/13/2026
//***********************************************************
#include "CardList.h"

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

string printArray(int a[], int n){
    string out = "[";
    for (int i = 0; i < n; i++){
        if (a[i] == 0) out += "-";
        else if (a[i] == 1) out += "A";
        else if (a[i] == 11) out += "J";
        else if (a[i] == 12) out += "Q";
        else if (a[i] == 13) out += "K";
        else out += to_string(a[i]) ;

        if (i < n-1) out += ", ";
    }
    out +=  "]";
    return out;
}

CardList::CardList(int a, int b, int c, int d, int e){
    cards[0] = a;
    cards[1] = b;
    cards[2] = c;
    cards[3] = d;
    cards[4] = e;
    history.push_back(printArray(cards, 5) + ": New");
}

string CardList::getHistory(){
    string out;
    for (string s: history)
        out += s + "\n";
    return out;
}
void CardList::change(int p1, int p2){
    swap(cards[p1], cards[p2]);
    history.push_back(printArray(cards, 5) + ": Change " + to_string(cards[p1]) + " and " + to_string(cards[p2]));
}
void CardList::reverse(){
    swap(cards[0], cards[4]);
    swap(cards[1], cards[3]);
    history.push_back(printArray(cards, 5) + ": Reverse");
}
void CardList::move(){
    int temp = cards[0];
    for (int i = 0; i < 4; i++) cards[i] = cards[i+1];
    cards[4] = temp;
    history.push_back(printArray(cards, 5) + ": Move");
}
int CardList::search(int val){ 
    for (int i = 0; i < 5; i++) {
        if (val == cards[i]) return i;
    }
    return -1; 
}
void CardList::bubbleSort(bool debug){
    for (int maxElement = 4; maxElement > 0; maxElement--) {
        for (int index = 0; index < maxElement; index++) {
            if (cards[index] > cards[index + 1])
                swap(cards[index], cards[index + 1]);
        }
        if (debug) cout << "---" << printArray(cards, 5) << endl;
    }
    history.push_back(printArray(cards, 5) + ": Bubble Sort");
}
void CardList::selectionSort(bool debug){ 
    int minIndex, minValue;
    for (int start = 0; start < 4; start++) {
       minIndex = start;
       minValue = cards[start];
       for (int index = start + 1; index < 5; index++) {
            if (cards[index] < minValue) {
                minValue = cards[index];
                minIndex = index;
            }
       }
       swap(cards[minIndex], cards[start]);
       if (debug) cout << "---" << printArray(cards, 5) << endl;
    }
    history.push_back(printArray(cards, 5) + ": Selection Sort");
}