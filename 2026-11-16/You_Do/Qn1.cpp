#include<iostream>
using namespace std;
bool isPrime(int a){
  int count=0;
  for(int i=1; i<=a; i++){
    if(a%i==0){
      count++;
    }
  }
  if(count==2){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int a;
  cout<<"Enter a number: "<<endl;
  cin>>a;
  if(isPrime(a)){
    cout<<"It is Prime";
  }
  else{
    cout<<"Not Prime";
  }
  return 0;
}