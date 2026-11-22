#include <iostream>
using namespace std;

int main() {
    int fixed = 30;
    int rate = 9;
    int km = 18;
    int fare = fixed + rate * km;
    cout << "Auto fare = " << fare;
    return 0;
}