#include<iostream>
using namespace std;
int main(){
  int hours=0, target=1000, cells=5;
  while(cells<=1000){
    hours++;
    cells*=2;
  }
  cout<<"Hours: "<<hours<<endl<<"Cells: "<<cells;
  return 0;
}