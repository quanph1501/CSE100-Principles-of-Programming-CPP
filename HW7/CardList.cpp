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

        if (i < n-2) out += ", ";
    }
    out +=  "]: New";
    return out;
}

CardList::CardList(int a, int b, int c, int d, int e){
    cards[0] = a;
    cards[1] = b;
    cards[2] = c;
    cards[3] = d;
    cards[4] = e;
    printArray(cards, 5);
}

string CardList::getHistory(){
    string out = "[";
    for (int i = 0; i < 5; i++){
        if (cards[i] == 0) out += "-";
        else if (cards[i] == 1) out += "A";
        else if (cards[i] == 11) out += "J";
        else if (cards[i] == 12) out += "Q";
        else if (cards[i] == 13) out += "K";
        else out += to_string(cards[i]) ;

        if (i < 4) out += ", ";
    }
    out +=  "]: New";
    return out;
}
void CardList::change(int p1, int p2){ }
void CardList::reverse(){ }
void CardList::move(){ }
int CardList::search(int val){ return -1; }
void CardList::bubbleSort(bool debug){ }
void CardList::selectionSort(bool debug){ }