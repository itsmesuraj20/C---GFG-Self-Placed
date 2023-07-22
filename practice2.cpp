//Print the number in reverse order from N to 1 using recursion
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

    cout << n << " ";
    rev(n - 1);
}

int main() {
    cout << "Enter the value of N: ";
    int n;
    cin >> n;

    rev(n);

    return 0;
}
