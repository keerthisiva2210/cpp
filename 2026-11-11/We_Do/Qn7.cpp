#include<iostream>
using namespace std;
int main(){
  int target,f_deposit,total=0,weeks=1;
  cout<<"Enter the target and first deposit: "<<endl;
  cin>>target>>f_deposit;
  total=f_deposit;
  while(total<target){
    f_deposit+=20;
    total+=f_deposit;
    weeks++;
  }
  cout<<"Total: "<<total<<endl<<"Weeks: "<<weeks;
  return 0;
}