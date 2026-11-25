#include<iostream>
using namespace std;
int main(){
  int attd[5]={28,31,26,30,29};
  int correct;
  cout<<"Enter correct attendence of Wednesday: ";
  cin>>correct;

  attd[2]=correct;
  cout<<"Correct attendence of 5 days: ";

  for(int i=0; i<5; i++){
    cout<<attd[i];
    if(i<5-1){
      cout<<", ";
    }
  }
  return 0;
}