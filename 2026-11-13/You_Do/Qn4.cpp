#include<iostream>
using namespace std;
int main(){
  int marks[5];

  cout<<"Enter 5 marks in order: "<<endl;

  for(int i=0; i<5; i++){
    cin>>marks[i];
  } 

  cout<<"The third submission is "<<marks[2]<<endl;

  cout<<"The last submission is "<<marks[5-1]<<endl;
  
  return 0;
}