#include <iostream>
using namespace std;
 void fib( int n)
 {
 int d1=0;
 int d2=1;
 int nextDigit;
 for (int  i = 1; i <= n; i++)
 {
    cout<<d1<<endl;
    nextDigit=d1+d2;
    d1=d2;
    d2=nextDigit;

 }
 return ; 
 }

int main()
{
    int n;
    cout<<"Input the number of terms:"<<endl;
    cin>>n;

    fib(n);

    return 0;
}
/*
Input the number of terms:
10
0
1
1
2
3
5
8
13
21
34
This is the output of the febinacci function.
*/