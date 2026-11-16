#include<iostream>
using namespace std;
int main()
{
    int id[6]={41,72,15,72,60,72};
    int target,count=0;
    cout<<"enter target: ";
    cin>>target;
    cout<<"indices ";
    for(int i=0;i<6;i++)
    {
        if(id[i]==target)
        {
            cout<<i<<" ";
            count++;
        }
    }
    
    if(count==0)
    {
        cout<<"no matches  ";
    }
    cout<<"count: "<<count<<endl;
}