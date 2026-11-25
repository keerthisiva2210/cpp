#include<iostream>
using namespace std;

class Employee
{
public:
    int employee_id;
    string name;
    string dept;
    void displayCard()
    {
        cout<<"ID "<<employee_id<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Department "<<dept;
    }
};
int main()
{
    Employee details;
    cout<<"Enter the employee ID: ";
    cin>>details.employee_id;
    cout<<"Enter the employee name: ";
    cin>>details.name;
    cout<<"Enter the department: ";
    cin>>details.dept;
    details.displayCard();
}