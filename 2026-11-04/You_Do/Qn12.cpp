#include<iostream>
using namespace std;
int main(){
    int tot_pens=500;
    int pens_per_box=12;
    cout<<"no of full boxes:"<<tot_pens/pens_per_box<<endl;
    cout<<"no of pens left:"<<tot_pens%pens_per_box<<endl;
    return 0;
}