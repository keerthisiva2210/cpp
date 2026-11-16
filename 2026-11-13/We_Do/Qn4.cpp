#include<iostream>
using namespace std;
int main()
{
    int marks[5]={70,45,90,60,80};
    int firstmark,secondmark;
    cin>>firstmark;
    cin>>secondmark;
    cout<<marks[firstmark-1]<<endl;
    cout<<marks[secondmark-1];

}