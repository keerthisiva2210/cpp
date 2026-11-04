#include<iostream>
using namespace std;
int main(){
    int students=1250;
    int each_bus_capacity=45;
    cout<<"no of full buses: "<<students/each_bus_capacity <<endl;
    cout<<"students left without seat: "<<students%each_bus_capacity <<endl;
    return 0;
}