#include <iostream>
#include <string>
using namespace std;
int main() {
    string code;
    cin >> code;
    cout << code[0] << endl << code[code.length() - 1];
    return 0;
}
