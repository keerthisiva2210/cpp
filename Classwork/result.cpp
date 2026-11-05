#include<iostream>
using namespace std;
int main(){
    int thermometer=37;
    float resulta=(float)(thermometer*9/5)+32; 
    float resultb=(float)(thermometer*9.0/5)+32; 
    cout<<"result a: "<<resulta<<endl;
    cout<<"result b: "<<resultb;
}