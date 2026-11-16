#include<iostream>
using namespace std;
#include<cmath>

int square(int n);

int main()
{
    int a;
    cin>>a;
    int result=square(a);
    cout<<result;
}
int square(int n)
{
    int value=sqrt(n);
    return value;
}

