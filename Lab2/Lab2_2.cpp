#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int notebookCount, penCount;
    double notebookPrice, penPrice, taxRate;
    double subtotal, tax, total;
    cin >> notebookCount >> penCount;
    cin >> notebookPrice >> penPrice >> taxRate;
    subtotal = notebookCount*notebookPrice + penCount*penPrice;
    tax = subtotal*taxRate;
    total = subtotal + tax;
    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << subtotal << '\n';
    cout << "Tax: $" << tax << '\n';
    cout << "Total: $" << total << '\n';
    return 0;
}