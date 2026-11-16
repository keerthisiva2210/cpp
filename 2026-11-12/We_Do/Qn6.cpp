#include<iostream>
using namespace std;
int main()
{
    int tickets[4]={10,20,30};
    int new_num;
    cin>>new_num;
    cout<<endl;
    for(int i=3;i>0;i--)
    {
        tickets[i]=tickets[i-1];

    }
    for(int i=0;i<4;i++)
    {
        cout<<tickets[i]<<" ";
    }
    
}