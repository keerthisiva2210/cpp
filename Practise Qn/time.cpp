#include <iostream>
using namespace std;

int main()
{
    for(int min = 2; min <= 3; min++)
    {
        int start = (min == 2) ? 12 : 0;
        int end = (min == 3) ? 15 : 59;

        for(int sec = start; sec <= end; sec++)
        {
            cout << min << " min : " << sec << " sec" << endl;
        }
    }

    return 0;
}