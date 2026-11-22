#include <iostream>
using namespace std;

int main() {
    int amount = 350;
    bool isMember = true;
    bool freeDelivery = amount > 500 || isMember;
    cout << "Free delivery = " << freeDelivery;
    return 0;
}