#include<iostream>
using namespace std;

int addScores(int first,int second);

int main()
{
    int a,b;
    cout<<"Enter first and second points: "<<endl;
    cin>>a>>b;
   int result= addScores(a,b);
   cout<<result;
}
int addScores(int first, int second)
{
    int sum=first+second;
    return sum;
}