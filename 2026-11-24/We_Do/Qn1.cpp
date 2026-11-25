#include<iostream>
using namespace std;

struct book
{
    int book_id;
    string book_name;
    int copies;
};
int main()
{
    book details;
    cout<<"Enter the Book ID: ";
    cin>>details.book_id;
    cout<<"Enter the Book name: ";
    getline(cin >> ws,details.book_name);
    cout<<"Enter the Number of copies: ";
    cin>>details.copies;
    cout<<"ID "<<details.book_id<<endl;
    cout<<"Title "<<details.book_name<<endl;
    cout<<"Copies "<<details.copies;

}