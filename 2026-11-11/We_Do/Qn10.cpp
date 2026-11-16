#include<iostream>
using namespace std;
int main(){
  int length, breadth, temp, temp2;
  cout<<"Enter length & Breadth: "<<endl;
  cin>>length>>breadth;
  if(breadth>length){
    temp=breadth;
    breadth=length;
    length=temp;
  }
  while(breadth!=0){
    temp2 = length%breadth;
    length = breadth;
    breadth = temp2;
  }
  cout<<"Largest square tile that fits a rectangular floor is "<<length;
  return 0;
}