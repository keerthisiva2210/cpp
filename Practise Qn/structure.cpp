#include<iostream>
using namespace std;

  struct students
  {
    int rollno;
    string name;
    int  maths;
    int english;
    int science;
    int total;
    float avg;
    int rank;
    bool result;
  };

int main(){
  students keerthi;
  cout<<"Enter rollno.: ";
  cin>>keerthi.rollno;
  cout<<"Enter name: ";
  cin>>keerthi.name;
  cout<<"Enter marks of maths,english,science: "<<endl;
  cin>>keerthi.maths>>keerthi.english>>keerthi.science;
  keerthi.total=keerthi.maths+keerthi.english+keerthi.science;
  keerthi.avg= keerthi.total/3;
  cout<<"Roll no.: "<<keerthi.rollno<<endl;
   cout<<"Name: "<<keerthi.name<<endl;
  cout<<"Maths mark: "<<keerthi.maths<<endl;
  cout<<"English mark: "<<keerthi.english<<endl;
  cout<<"Science mark: "<<keerthi.science<<endl;
  cout<<"Average mark: "<<keerthi.avg;
  return 0;

}