#include<iostream>
using namespace std;
int main(){
  int ticket;
  cout<<" Enter a Starting ticket: "<<endl;
  cin>>ticket;
  do{
    cout<<ticket<<endl;
    ticket+=2;
  }while(ticket<=9);

  return 0;
}