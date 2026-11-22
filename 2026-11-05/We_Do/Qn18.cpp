#include <iostream>
using namespace std;

int main() {
    int code = 4827;
    int d1 = code % 10;
    int r1 = code / 10;
    int d2 = r1 % 10;
    int r2 = r1 / 10;
    int d3 = r2 % 10;
    int d4 = r2 / 10;
    int sum = d1 + d2 + d3 + d4;
    cout << "Sum = " << sum;
    return 0;
}