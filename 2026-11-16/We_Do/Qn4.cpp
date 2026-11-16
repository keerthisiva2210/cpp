#include<iostream>
using namespace std;

double triangleArea(double base,double height);

int main()
{
    double b,h;
    cout<<"Enter base and height: "<<endl;
    cin>>b>>h;
    double Area=triangleArea(b,h);
    cout<<Area;
}
double triangleArea(double base,double  height)
{
    double area=0.5*base*height;
    return area;
}