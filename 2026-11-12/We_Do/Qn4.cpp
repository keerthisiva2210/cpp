#include<iostream>
using namespace std;
int main()
{
    int readings[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter "<<i<<endl;
        cin>>readings[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<readings[i]<<" ";
    }
}