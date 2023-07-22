//Sum of Natural Number
#include<iostream>
using namespace std;

int Nat(int n)
{
    if(n<=0)
    return 0;

    return n+Nat(n-1);
}

int main ()
{
    cout<<"Enter the number of the N \n";
    int n;
    cin>>n;

    cout<<Nat(n);
    return 0;
}