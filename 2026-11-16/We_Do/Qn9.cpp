#include<iostream>
using namespace std;

int countEvenTickets(int n);

int main()
{
    int value;
    cin>>value;
    int even=countEvenTickets(value);
    cout<<even;
}
int countEvenTickets(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            count++;
        }
    }
    return count;
}
