#include<iostream>
using namespace std;

int main()
{
    int original_stock_count ,corrected_count;
    cin>>original_stock_count>>corrected_count;
    int*ptr=&corrected_count;
    original_stock_count =*(ptr);
    cout<<original_stock_count;
}