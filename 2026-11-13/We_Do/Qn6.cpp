#include<iostream>
using namespace std;
int main()
{
    int days[5];
    int newnum;
    cout<<"enter attendance:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>days[i];
    }
    cout<<"enter replacement no: "<<endl;
    cin>>newnum;
    days[2]=newnum;
    cout<<"replaced num:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<days[i]<<" ";
    }
}