#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>=10)
    {
       int a=n;
       int rem=1;
       while(a>0)
       {
        rem*=a%10;
        a/=10;
       }
       n=rem;
    }
    cout<<n;
}