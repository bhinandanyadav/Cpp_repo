#include<iostream>
#include<math.h>
using namespace std;
bool primeNumber(int n)
{
   for (int i = 2; i <= sqrt(n); i++)
   {
    if (n%i==0)
    {
      return false;
    }

   }
   
return true; 
}
int main()
{
int a,b;
cout<<"Input the number ranging between a and b"<<endl;
cin>>a>>b;
for (int i = a; i <= b; i++)
{
    if(primeNumber(i))
    {
        cout<<i<<endl;
    }
}
}
/*
Input the numbers of a and b
2  20
2
3
5
7
11
13
17
19
Tjis the output of checking the prime number from 2 to 20 with the use of function.
*/