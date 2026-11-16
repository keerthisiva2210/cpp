#include<iostream>
using namespace std;
int main()
{
    int b1,b2,b3;
    cout<<"Enter b1: ";
    cin>>b1;
    cout<<endl<<"Enter b2: ";
    cin>>b2;
    cout<<endl<<"Enter b3: ";
    cin>>b3;
    if(b1>b2)
    {
        if(b1>b3)
        {
             cout<<"b1 is greater";
        }
        else
        {
             cout<<"b3 is greater";
        }
     }
     else if(b2>b3)
     {
        cout<<"b2 is greater";
     }
     else
     {
         cout<<"b3 is greater";
     }
     return 0;
}