#include<iostream>
using namespace std;
int countDigits(int a){
  int count=0;
  while(a>0){
    a/=10;
    count++;
  }
  if(count==0){
    return 1;
  }
  return count;
}

int main(){
  int a;
  cout<<"Enter a number: "<<endl;
  cin>>a;
  cout<<"Count of the digits is "<<countDigits(a);
}