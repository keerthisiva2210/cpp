#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int*ptr;
    int index=0,total=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    ptr=&index;
    for(int i=0;i<5;i++)
    {
        total=total+arr[*ptr];
        ++*ptr;
    }
    cout<<total;
    
}