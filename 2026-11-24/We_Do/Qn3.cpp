#include<iostream>
using namespace std;

class Room
{
private:
    int length;
    int width;
public:
void setlength(int l)
{
    length=l;
}
int getlength()
{
    return length;
}
void setwidth(int w)
{
    width=w;
}
int getwidth()
{
    return width;
}
};
int main()
{
    Room values;
    int length,width;
    cout<<"Enter the room length in metres: ";
    cin>>length;
    cout<<"Enter the room width in metres: ";
    cin>>width;
    values.setlength(length);
    values.setwidth(width);
    cout<<"Area "<<values.getlength()* values.getwidth()<<" square meters";
}