#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    cout<<"enter value for arr1: "<<endl;
     for(int i=0;i<3;i++)
    {
         cout<<"enter value for the row: "<<endl;
        for(int j=0;j<3;j++)
    {
        cin>>arr1[i][j];
    }

    }
     cout<<"enter value for arr2: "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"enter value for the row: "<<endl;
        for(int j=0;j<3;j++)
    {
        cin>>arr2[i][j];
    }
    
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        cout<<arr1[i][j]+arr2[i][j]<<"\t";
    }
    cout<<endl;
    }
}