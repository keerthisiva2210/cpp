#include<iostream>
using namespace std;
int previewBalance(int balance, int cost)
{
    int balance1=balance-cost;
    return balance,balance1;
}
int main()
{
    int balance,cost;
    cin>>balance>>cost;
  cout<<previewBalance(balance,cost);
}