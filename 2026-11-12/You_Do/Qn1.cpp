#include <iostream>
using namespace std;
int main()
{
    int count[6];
    cout << "Enter delivery counts for six days: ";
    for(int i = 0; i < 6; i++)
    {
        cin >> count[i];
    }
    cout << "First count: " << count[0] << endl;
    cout << "Last count: " << count[5] << endl;
    cout << "Reverse order: ";
    for(int i = 5; i >= 0; i--)
    {
        cout << count[i] << " ";
    }
    return 0;
}