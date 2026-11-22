#include<iostream>
using namespace std;
int main()
{
    string sample="Hello this is a test";
    cout<<"The string is: "<<sample<<endl;
    cout<<"Length of the string is: "<<sample.length()<<endl;
    cout<<"The first character of the string is: "<<sample.front()<<endl;
    cout<<"The last character of the string is: "<<sample.back()<<endl;
    cout<<"The existence of the string (ll): "<<sample.find("ll")<<endl;
    cout<<"The substring of the string is: "<<sample.substr(4,8)<<endl;
    return 0;

}

