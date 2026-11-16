#include<iostream>
using namespace std;
int main(){
    int students=85;
    int students_in_each_team=6;
    cout<<"no of full teams:"<<students/students_in_each_team<<endl;
    cout<<"no of students left:"<<students%students_in_each_team<<endl;
    return 0;
}