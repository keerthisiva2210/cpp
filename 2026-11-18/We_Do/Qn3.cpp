#include<iostream>
using namespace std;

int main()
{
    int c1,c2;
    cin>>c1>>c2;
    int*p=&c1;
    int*q;
    q=p;
    *q=*(q)+1;
    cout<<*(p)<<" ";
    q=&c2;
    cout<<*(q);
}