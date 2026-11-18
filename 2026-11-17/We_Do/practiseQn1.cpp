#include<iostream>
using namespace std;

void add()
{
    int a,b;
    cout<<"enter a,b: "<<endl;
    cin>>a>>b;
    cout<<"sum of a,b is: "<<a+b<<endl;
}
void add(int a,int b)
{
    cout<<a+b<<endl;
}
void add(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}
int add(int a,float b1)
{
    float sum=a+b1;
    return sum;
}
int add(int a,int b,float c1)
{
    float sum1=a+b+c1;
    return sum1;
}

int main()
{
    int a,b,c;
    float b1,c1;
    add();
    cout<<"enter a,b,c: "<<endl;
    cin>>a>>b>>c;
    cin>>b1>>c1;
    add(a,b);
    add(a,b,c); 
    float sum=add(a,b1);
    cout<<sum<<endl;
    float sum1=add(a,b,c1);
    cout<<sum1;
}