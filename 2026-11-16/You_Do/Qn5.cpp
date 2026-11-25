#include<iostream>
using namespace std;
float areaTriangle(int base, int height);
float areaTriangle(int base, int height){
  return 0.5*base*height;
}

int main(){
  int height, base;
  float area;
  cout<<"Enter a base and height: "<<endl;
  cin>>base>>height;
  area=areaTriangle(base, height);
  cout<<"Area of triangle is "<<area;
  return 0;
}