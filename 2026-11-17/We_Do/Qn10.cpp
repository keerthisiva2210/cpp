#include <iostream>
using namespace std;

int parcelCharge(int parcels)
{
    return parcels * 10;
}

int parcelCharge(int parcels, int fee)
{
    return (parcels * 10) + fee;
}

int main()
{
    int parcels, fee;
    cout<<"Enter parcel count and handling fee: ";
    cin>>parcels>>fee;
    cout<<parcelCharge(parcels)<<" ";
    cout<<parcelCharge(parcels, fee);
    return 0;
}