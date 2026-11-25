#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    getline(cin, name);
    int pos = name.find(' ');
    if (pos == -1) cout << name;
    else cout << name.substr(0, pos);
    return 0;
}
