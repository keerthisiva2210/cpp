#include<iostream>
using namespace std;
int main(){
    int tot_choco=50;
    int children=7;
    int choco_per_child=tot_choco/children;
    cout<<"Remaining_chocolates: "<<tot_choco%children<<endl;
    cout<<"Chocolates per child: "<<choco_per_child<<endl;
    return 0;
}