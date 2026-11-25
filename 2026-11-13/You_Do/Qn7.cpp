#include<iostream>
using namespace std;
int main(){
  int id[6]={41,72,15,72,60,92};
  int target;
  bool flag =false;
  cout<<"Enter target: ";
  cin>>target;

  for(int i=0; i<6; i++){
    if(id[i]==target){
      flag=true;
      cout<<i;
      break;
    }
  }
  if(flag==false){
    cout<<"-1";
  }
  return 0;
}