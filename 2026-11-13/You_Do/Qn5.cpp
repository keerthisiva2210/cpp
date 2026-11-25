#include<iostream>
using namespace std;
int main(){
  int items[5];
  cout<<"Enter the items sold on 5 consecutive days: "<<endl;
  for(int i=0; i<5; i++){
    cin>>items[i];
  }
  cout<<"The output: ";
    for(int j=0; j<5; j++){
    cout<<items[j];
    if(j<5-1){
      cout<<", ";
    }
  }
 return 0;
}