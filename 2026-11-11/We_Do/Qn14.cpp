#include<iostream>
using namespace std;
int main(){
  int limit, total=0;
  cout<<"Enter an upperlimit: "<<endl;
  cin>>limit;
  for(int i=2; i<=limit; i++){
    int count=0;
    for(int j=1; j<=i; j++){
      if(i%j==0){
        count++;
      }
    }
    if(count==2){
      cout<<i<<endl;
      total++;
    }
  }
  cout<<"Total: "<<total;
  return 0;
}