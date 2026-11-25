#include<iostream>
#include<string>
using namespace std;
void greet(string Name);
void greet(string Name){
  cout<<"Hello, "<<Name<<"!";
}

int main(){
  string name;
  cout<<"Enter a name: "<<endl;
  getline(cin, name);
  greet(name);
  return 0;
}