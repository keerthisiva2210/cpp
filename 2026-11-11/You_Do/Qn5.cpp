#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three route distances: ";
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        cout << "Shortest route: " << a;
    }
    else if (b <= a && b <= c) {
        cout << "Shortest route: " << b;
    }
    else {
        cout << "Shortest route: " << c;
    }

    return 0;
}