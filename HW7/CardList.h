#ifndef CARDLIST_H
#define CARDLIST_H
#include <iostream>
#include <vector>
using namespace std;
class CardList {
    private:
        int cards[5];
        vector<string> history;
    public:
        CardList(int, int, int, int, int);
        string getHistory();
        void change(int, int);
        void reverse();
        void move();
        int search(int);
        void bubbleSort(bool);
        void selectionSort(bool);
};
#endif