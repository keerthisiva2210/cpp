#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<<"Enter a word: "<<endl;
    cin>>word;
    int length=word.length();
    cout<<"length: "<<length<<endl;
    for(int index=0;index<length;index++)
    {
        cout<<"The character at index "<<index<<" "<<word[index]<<endl;
    }
}