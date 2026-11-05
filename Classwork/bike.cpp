#include<iostream>
using namespace std;
int main(){
    int age=17;
    bool holdLicence=true;
    if((age>=18) || (holdLicence==true)){
        cout<<"eligible";
    }
    else{
        cout<<"not eligible";
    }
    return 0;
}