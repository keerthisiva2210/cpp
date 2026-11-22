#include<iostream>
using namespace std;
void addReturns(int*count,int returned)
{
    *count=*(count)+returned;
}
int main()
{
    int count,returns;
    cin>>count>>returns;
    int*ptr=&count;
    addReturns(ptr,returns);
    cout<<*(ptr);
}