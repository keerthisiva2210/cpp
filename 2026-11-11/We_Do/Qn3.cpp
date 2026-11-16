#include <iostream> 
using namespace std; 
 
int main() { 
    int rows = 3, columns = 4, sum = 0, maximum = 0; 
    for (int row = 1; row <= rows; ++row) { 
        for (int column = 1; column <= columns; ++column) { 
            int value = row * column; 
            if (column > 1) cout << ' '; 
            cout << value; 
            sum += value; 
            if (value > maximum) maximum = value; 
        } 
        cout << '\n'; 
    } 
    cout << "Sum = " << sum << '\n'; 
    cout << "Maximum = " << maximum << '\n'; 
    return 0; 
} 