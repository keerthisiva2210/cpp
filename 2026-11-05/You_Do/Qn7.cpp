#include <iostream>
using namespace std;

int main() {
    int total = sizeof(double) + sizeof(char) + sizeof(bool);
    cout << "Total memory = " << total << " bytes";
    return 0;
}