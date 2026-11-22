#include <iostream>
using namespace std;

int main()
{
    int locker;
    int *ptr = nullptr;
    cout << "Enter locker no.: ";
    cin >> locker;
    if (locker != 0)
    {
        ptr = &locker;
         cout<<*ptr;
    }
    else
    {
        cout<<"No locker";
    } 
    return 0;
}