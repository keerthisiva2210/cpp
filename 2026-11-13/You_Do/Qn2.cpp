#include<iostream>
using namespace std;
int main(){
  int seats[2][3];
  cout<<"Enter the label numbers: "<<endl;
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cin>>seats[i][j];
    }
  }
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout<<seats[i][j]<<" ";
    }
     if(i<1){
       cout<<"/ ";
     }
  }
  return 0;
}