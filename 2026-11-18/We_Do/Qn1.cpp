#include<iostream>
using namespace std;

int main()
{
    int score;
    cin>>score;
    int*address=&score;
    cout<<*(address)<<endl;
    if(score==*(address))
    {
        cout<<"same address";
    }
}