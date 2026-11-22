#include <iostream>
using namespace std;

int main() {
    int age = 10;
    bool hasCard = true;
    bool allowed = age >= 12 && hasCard;
    cout << "Allowed = " << allowed;
    return 0;
}