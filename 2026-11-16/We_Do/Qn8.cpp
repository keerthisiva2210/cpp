#include<iostream>
using namespace std;

int greatestScore(int a,int b, int c);

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int score=greatestScore(a,b,c);
    cout<<score;
}
int greatestScore(int a,int b,int c)
{
    if(a>=b)
    {
        if(a>=c)
        {
            return a;
        }
        else{
            return c;
        }
    }
    if(b>=c)
    {
        return b;
    }else
    {
        return c;
    }
}