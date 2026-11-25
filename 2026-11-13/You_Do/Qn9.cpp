#include<iostream>
using namespace std;
int main(){
  int size=5;
  int entries[size]={101,102,103,104,105};
  int delindex;
  cout<<"Enter the index you want to delete: "<<endl;
  cin>>delindex;
  if(delindex>size){
    cout<<"Invalid Index"<<endl;
  }
  for(int i=delindex; i<size; i++){
    entries[i]=entries[i+1];
  }
  size--;
  for(int j=0; j<size; j++){
    cout<<entries[j];
    if(j<size-1){
      cout<<", ";
    }
  }
  cout<<endl<<"Index: "<<size-1;
  return 0;
}