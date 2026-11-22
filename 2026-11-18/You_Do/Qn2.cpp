#include<iostream>
using namespace std;
int main()
{
    int ticket_count;
    int sold;
    cin>>ticket_count>>sold;
    int*ptr=& ticket_count;
    int*ptr1=&sold;
    cout<<*(ptr)-*(ptr1);
}