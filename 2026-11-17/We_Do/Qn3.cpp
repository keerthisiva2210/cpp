#include<iostream>
using namespace std;

void printOrder(int items)
{
    int count=0;
    while(items>=10)
    {
        count++;
        items-=10;
    }
    cout<<count<<"/";
}
int main()
{
    int items;
    cin>>items;
     printOrder(items);
     cout<<items;
   
}