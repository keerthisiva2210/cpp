
#include<iostream>
using namespace std;

int main(){
    int code = 4827;
    int digit1 = code % 10;
    int digit2 = (code / 10) % 10;
    int digit3 = (code / 100) % 10;
    int digit4 = code / 1000;
    int sum = digit1 + digit2 + digit3 + digit4;
    cout << "Sum of the 4 digits: " << sum << endl;
    return 0;
}
