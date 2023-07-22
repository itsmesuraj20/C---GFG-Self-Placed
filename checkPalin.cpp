//Program to check the given string is Palindrome or not
#include<iostream>
using namespace std;

bool isPalin(string &str,int start,int end)
{
    if(start>=end)
    return true;

    return (str[start]==str[end])&&isPalin(str,start + 1,end -1);
}
int main()
{
    cout<<"Enter the string\n";
    
    string str;
    getline(cin,str);
    int n=str.length();
    int st=0,en=n-1;
    bool check=isPalin(str,st,en);

    if(check)
    cout<<"True";

    else
    cout<<"False";
    
    return 0;
}