#include<iostream>
#include<cmath>
using namespace std;

int table(int a){
  float tablesCount=float(a)/4.0;
  return ceil(tablesCount);
}

int main(){
  int a;
  cout<<"Enter the total students: "<<endl;
  cin>>a;
  cout<<"Tables needed: "<<table(a);
}