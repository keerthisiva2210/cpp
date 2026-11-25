#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, club, badge;
    cin >> name >> club;
    badge = name + " - " + club;
    cout << badge << endl;
    if (club == "Robotics") cout << "Robotics";
    return 0;
}
