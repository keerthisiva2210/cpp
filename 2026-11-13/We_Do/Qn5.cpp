#include<iostream>
using namespace std;
int main()
{
    int num[5];
    cout<<"enter the values:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<" ";
    }
}