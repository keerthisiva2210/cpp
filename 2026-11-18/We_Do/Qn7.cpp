#include<iostream>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int index;
    cin>>index;
    int*ptr=&index;
    cout<<arr[*(ptr)];

}