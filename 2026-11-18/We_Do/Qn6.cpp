#include<iostream>
using namespace std;

void addBonus(int*score)
{
    *score=*(score)+5;
}
int main()
{
    int score;
    cin>>score;
    int*ptr=&score;
    addBonus(ptr);
    cout<<*(ptr);
}