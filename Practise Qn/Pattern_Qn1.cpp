#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int n=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
    {
        if(j<=i)
        {
            cout<<n<<"\t";
            n++;
        }
    }
    cout<<endl;
    n=1;
    }
}