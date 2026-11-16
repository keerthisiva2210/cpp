#include<iostream>
using namespace std;
int main()
{
    int id[6]={41,72,15,72,60,92};
    int target;
    bool found=0;
    cout<<"enter target: ";
    cin>>target;
    for(int i=0;i<6;i++)
    {
        if(id[i]==target)
        {
            cout<<i;
            found=1;
            break;
        }
    }
    if(found==0)
    {
        cout<<"-1";
    }
}