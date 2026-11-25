#include<iostream>
using namespace std;
int sumDigits(int a){
  int rem=0;
  while(a>0){
    rem+=a%10;
    a/=10;
  }
  return rem;
}

int main(){
  int a;
  cout<<"Enter a number: "<<endl;
  cin>>a;
  cout<<"Sum of the digits is "<<sumDigits(a);
}