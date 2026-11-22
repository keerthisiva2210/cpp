#include<iostream>
using namespace std;
int twice(int amount)
{
    amount=amount*2;
    return amount;
}
double twice(double amount)
{
    amount=amount*2;
    return amount;
}
int main()
{
    int amount;
    cin>>amount;
    double amnt;
    cin>>amnt;
    cout<<twice(amount)<<" ";
    cout<<twice(amnt);

}