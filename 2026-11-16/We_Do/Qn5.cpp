#include<iostream>
using namespace std;

int readChoice(int a);

int main()
{
    int n;
    cin>>n;
    int result=readChoice(n);
    cout<<result;
}
int readChoice(int a)
{
    if(a==1)
    {
        return 1;
    }else if(a==2)
    {
        return 2;
    }else{
        cout<<"enter valid no.";
    }
    
}