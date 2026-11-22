#include <iostream>
using namespace std;
void showAmounts(int amount)
{
    if (amount > 0)
    {
        int amount = 2;
        cout<<amount<<endl;
    }
    cout<<amount<<endl;
}
int main()
{
    int n;
    cout<<"Enter sales count: ";
    cin>>n;
    showAmounts(n);
    return 0;
}