#include<iostream>
#include<string>
using namespace std;
void clubName(string name){
  cout<<name<<"'s "<<"Maths Club";
}

int main(){
  string name = "Arun";
  clubName(name);
  return 0;
}