#include<iostream>
using namespace std;
int addBonus(int score)
{
    cout<<score;
    return score+5;
}
int main()
{
    int score;
    cin>>score;
    int bonus=addBonus(score);
    cout<<" "<<bonus;
    return 0;
}
