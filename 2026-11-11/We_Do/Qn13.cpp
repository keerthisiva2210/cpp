#include<iostream>
using namespace std;
int main(){
  int note, count=0;
  cout<<"Enter the number of Notebooks: "<<endl;
  cin>>note;
  while(note>0){
    count++;
    if(note>=4){
      cout<<"Packed: 4"<<endl;
      note-=4;
    }
    else{
      cout<<"Packed: "<<note<<endl;
      note=0;
    }
  }
  cout<<"Cartons: "<<count;
  return 0;
}