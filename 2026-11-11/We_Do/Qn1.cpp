#include<iostream>
using namespace std;
int main(){
  int label=0, total=0, sheets;
  cout<<"Enter the number of sheets: "<<endl;
  cin>>sheets;
  for(int i=1; i<=sheets; i++){
    label+=4;
    total+=label;
    cout<<label<<endl;
  }
  cout<<"Total: "<<total<<endl;
}