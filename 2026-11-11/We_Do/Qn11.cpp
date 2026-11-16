#include<iostream>
using namespace std;
int main(){
  int row, sum=0;
  cout<<"Enter a row number: "<<endl;
  cin>>row;

  for(int i=1; i<=row; i++){
    for(int j=1; j<=row; j++){
      if(i>=j){
      cout<<j<<" ";
      sum+=j;
    }
    }
    cout<<endl;
  }
  cout<<"Sum: "<<sum;
  return 0;
}