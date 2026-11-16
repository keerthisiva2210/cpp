#include<iostream>
using namespace std;
int main()
{
    int balance,limit;
    int visits=0;
    cin>> balance;
    cin>>limit;
     while (balance > 0)
    {
        int payment;
        if (balance < limit)
        {
            payment = balance;
        }
        else
        {
            payment = limit;
        }
        cout << payment << endl;
        balance = balance - payment;
        visits++;
    }
    cout << "Visits = " << visits;
    return 0;
}