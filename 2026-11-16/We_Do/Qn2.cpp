#include<iostream>
using namespace std;

string greet();

int main()
{
    string fullName=greet();
    cout<<"Hello,"<<fullName<<"!";
}
string greet()
{
    string name;
    cout<<"Enter full name: "<<endl;
    getline(cin,name);
    return name;
}