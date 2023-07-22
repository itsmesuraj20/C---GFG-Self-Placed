//nth fibonacci numbre where n>=0
/*
 for ex-
I/p- n=3
o/p- 2
 */

#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fib(n-1)+fib(n-2);

}

int main ()
{
    cout<<"Enter the value of N \n";
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}


//Code from ChatGPT-
// #include <iostream>
// using namespace std;

// long long int fib(int n)
// {
//     if (n == 0)
//         return 0;

//    long long int a = 0;
//    long long int b = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         long long int c = a + b;
//         a = b;
//         b = c;
//     }

//     return b;
// }

// int main()
// {
//     cout << "Enter the value of N: ";
//     int n;
//     cin >> n;
//     cout << "The " << n << "th Fibonacci number is: " << fib(n) << endl;
//     return 0;
// }
