#include<iostream>
using namespace std;
int readTeam(){
  int a;
  cout<<"Enter a team size: "<<endl;
  cin>>a;
  return a;
}

int main(){
  int a = readTeam();
  cout<<"The team size is "<<a;
  return 0;
}