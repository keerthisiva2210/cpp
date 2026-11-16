#include<iostream>
using namespace std;
int main(){
  int count=0, participants;
  cout<<"Enter the number of Participants: "<<endl;
  cin>>participants;

  for(int i=1; i<=participants; i++){
    cout<<i<<endl;
    count++;
  }
  cout<<"Passes Stamped: "<<count;
  return 0;
}