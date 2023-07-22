//Print the number in straight order from 1 to N using recursion
#include <iostream>
using namespace std;

void rev(int n)
{
    if (n == 0) {
        cout << " ";
        return; // Base case for n = 0
    } else if (n < 0) {
        cout << "Invalid input. Please provide a non-negative integer." << endl;
        return; // Base case for negative n
    }
    rev(n - 1);
    cout << n << " ";
    
}

int main() {
    cout << "Enter the value of N: ";
    // int n;
    // cin >> n;

    rev(-1);

    return 0;
}
