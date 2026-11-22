#include <iostream>
using namespace std;

int main() {
    int books = 250;
    int issued = 63;
    int left = books - issued;
    cout << "Books remaining = " << left;
    return 0;
}