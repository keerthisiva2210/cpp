#include<iostream>
using namespace std;
int savings(int a){
  int total=0, start=0;
  for(int i=1; i<=a; i++){
    start+=5;
    total+=start;
  }
  return total;
}

int main(){
  int a;
  cout<<"Enter the days: "<<endl;
  cin>>a;
  cout<<"Total amount saved is "<<savings(a)<<" Rupees.";
}