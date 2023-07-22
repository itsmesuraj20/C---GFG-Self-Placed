//practicing the recursion question
#include<iostream>
using namespace std;

int fun1(int n)
{
    if (n == 1) {
        return 0;
    } else {
        return 1 + fun1(n / 2);
    }
}


//void fun(int n);
// void fun1(int n);//another example for the recursion
int main()
{
  //fun(3);

  cout<<"Fun1 begin from here"<<endl;

  cout<<fun1(16);
  return 0;  
}

/*void fun(int n)
{
    if(n==0)
    return ;

    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}*/

// void fun1(int n)
// {
//     if(n==0)
//     return ;


//     fun1(n-1);
//     cout<<n<<endl;
//     fun1(n-1);
// }


