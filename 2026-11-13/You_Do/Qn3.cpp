#include<iostream>
using namespace std;
int main(){
  int first[2][3];
  int second[2][3];
  int sum[2][3];
  cout<<"Enter the elements of first  matrix: "<<endl;
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cin>>first[i][j];
    }
  }
  cout<<"Enter the elements of second matrix: "<<endl;
    for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cin>>second[i][j];
    }
  }
   for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      sum[i][j]=first[i][j]+second[i][j];
    }
  }
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}