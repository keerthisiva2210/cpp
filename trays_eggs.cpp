#include<iostream>
using namespace std;
int main(){
    int tot_eggs=275;
    int eggs_in_each_tray=30;
    cout<<"Number of trays: "<<tot_eggs/eggs_in_each_tray<<endl;
    cout<<"Remaining eggs: "<<tot_eggs%eggs_in_each_tray<<endl;
    return 0;
}