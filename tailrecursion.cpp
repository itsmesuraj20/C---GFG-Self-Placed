//Tail Recursion question in which we have to find the factorial of the number

#include<iostream>
using namespace std;

long int fact(int n,int k)
{
    if(n==0||n==1)
    {
        return k;
    }
    else if(n<0)
    {
        return 0;
    }

    return fact(n-1,k*n);

}

int main ()
{
    cout<<"Enter the value of N \n";
    int n,k=1;
    cin>>n;
    cout<<fact(n,k);
    return 0;
}