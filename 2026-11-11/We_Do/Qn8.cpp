#include<iostream>
using namespace std;
int main(){
  int userInput, temp, reverse=0, rem;
  cout<<"Enter a number you want to check: "<<endl;
  cin>>userInput;
  temp=userInput;
  while(temp>0){
    rem=temp%10;
    reverse=(reverse*10)+rem;
    temp/=10;
  }
  (reverse==userInput)?cout<<"It is Palindrome"<<endl<<"Palindrome number is "<<reverse : cout<<"It is not Palindrome"<<endl;
  return 0;
}