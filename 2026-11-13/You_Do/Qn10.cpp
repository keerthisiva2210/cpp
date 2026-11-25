#include<iostream>
using namespace std;
int main(){
  int factarr[100];
  int userip, index=0, size=0;
  cout<<"Enter the number: "<<endl;
  cin>>userip;

  for(int i=1; i<=userip; i++){
    if(userip%i==0){
      factarr[index]=i;
      index++;
      size++;
    }
  }
    for(int j=0; j<size; j++){
      cout<<factarr[j]<<" ";
    }
}