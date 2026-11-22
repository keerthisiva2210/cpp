#include <iostream>
using namespace std;
int payableAmount(int bill);
int main()
{
    int bill;
    cin>>bill;
    int result = payableAmount(bill);
    cout<<result<<endl;
    return 0;
}
int payableAmount(int bill)
{
    if (bill>=500)
    {
        int discount = 50;
        bill = bill - discount;
    }
    return bill;
}