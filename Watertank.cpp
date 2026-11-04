#include<iostream>
using namespace std;
int main(){
    int litres=15;
    int min=8;
    int leakage=20;
    int water_in_the_tank=(litres*min)-leakage;
    cout<<"Water in the tank: "<<water_in_the_tank<<endl;
    return 0;
}