#include<iostream>
using namespace std;

int hallCapacity=30;

int remainingSeats(int occupied)
{
    return hallCapacity-occupied;
}
int main()
{
    int seats;
    cin>>seats;
    cout<<hallCapacity<<"/";
    int rem=remainingSeats(seats);
    cout<<rem;
}