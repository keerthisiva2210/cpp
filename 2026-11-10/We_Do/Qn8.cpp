#include<iostream>
using namespace std;
int main()
{
    int n,fib,fib1=0,fib2=1;
    cout<<"enter n: ";
    cin>>n;
    for(int i =1;i<=n;i++)
    {  
        cout<<fib1;
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
        
    }
    return 0;
}