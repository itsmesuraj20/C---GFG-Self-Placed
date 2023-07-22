//Print the sum of the number 
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n <= 9)
    { 
        return n;
    }
    return sum(n/10)+ n%10;
}

int main() {
    cout << "Enter the value of N: ";
    int n;
    cin >> n;

    cout<<sum(n);

    return 0;
}
