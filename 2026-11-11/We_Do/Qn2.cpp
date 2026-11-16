#include <iostream> 
using namespace std; 
 
int main() { 
    int n = 10, sum = 0, evenCount = 0; 
    for (int number = 1; number <= n; ++number) { 
        if (number % 2 == 0) { 
            ++evenCount; 
        } else { 
            sum += number * number; 
        } 
    } 
    cout << "Odd square sum = " << sum << '\n'; 
    cout << "Even count = " << evenCount << '\n'; 
    return 0; 
} 