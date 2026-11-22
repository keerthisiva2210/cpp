#include <iostream>
using namespace std;

int main() {
    int fee = 150;
    int rate = 60;
    int hours = 4;
    int total = fee + rate * hours;
    cout << "Total charge = " << total;
    return 0;
}