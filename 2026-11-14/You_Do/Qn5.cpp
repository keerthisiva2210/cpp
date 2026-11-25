#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cin >> word;
    word.insert(3, "S");
    cout << word << endl;
    word.erase(3, 1);
    cout << word << endl;
    word.replace(0, 1, "B");
    cout << word;
    return 0;
}
