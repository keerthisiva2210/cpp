#include<iostream>
using namespace std;

int perimeter(int side)
{
    return 4*side;
}
int perimeter(int length,int width)
{
    return (2*length)+(2*width);
}
int main()
{
    int side,length,width;
    cin>>side>>length>>width;
   cout<<perimeter(side);
    cout<<endl<<perimeter(length,width);
}