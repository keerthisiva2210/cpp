#include<iostream>
using namespace std;
int main(){
  int userInput, count=0;
  cout<<"Enter a number: "<<endl;
  cin>>userInput;
  for(int i=1; i<=userInput; i++){
    if(i%3==0){
     cout<<i<<endl;
     count++;
    }
  }
  cout<<"Count: "<<count;
  return 0;
}