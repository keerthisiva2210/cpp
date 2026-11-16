#include<iostream>
using namespace std;
int main()
{
    int lockers[5]={14,27,31,27,42};
    int a;
    bool isFound;
    cin>>a;
    for(int i=0;i<5;i++)
    {
        if(lockers[i]==a)
        {
            cout<<"found "<<a;
            isFound=1;
            break;
        }
    }
    if(isFound==0)
    {
        cout<<"not found";
    }
}