#include <iostream>
using namespace std;

int main() {
    int price;
    int quantity;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    int total = price * quantity;
    cout << "Total = " << total;
    return 0;
}