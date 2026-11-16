#include<iostream>
using namespace std;
int main(){
  int userInput, rem, rounds=0;
  cout<<"Enter a number: "<<endl;
  cin>>userInput;
  while(userInput>=10){
    int temp=1;
    while(userInput>0){
      rem=userInput%10;
      temp*=rem;
      userInput/=10;
  
    }
    userInput=temp;
    rounds++;
  }
  cout<<"Final output is "<<userInput<<endl<<"Rounds: "<<rounds;
  return 0;
}