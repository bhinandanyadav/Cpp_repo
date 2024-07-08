#include <iostream>
#include<math.h>
using namespace std;
  
bool check(int x, int y, int z)
{
    int a= max(x , max(y,z));
    int b;
    int c;

    if (a == x)
    {
       b= y;
       c= z;
    }
    else if (a == y)
    {
        b= x;
        c= z;
    }
    else
    {
        b= x;
        c= y;
    }
     if ( a*a == b*b + c*c)
     {
        return true;
     }
     else
     {
        return false;
     }
     
}  



int main()
{
    int x,y,z;
    cin>> x>>y>>z;

    int ans = check(x,y,z);
    if (ans)
    {
        cout<<"pythogorean triplate"<<endl;
    }
    else
    {
        cout<<"not pythogorean triplate"<<endl;
    }
}
/*
3 4 5
pythogorean triplate

3 4 4 
not pythogorean triplate

This is my output of Pythagorien triplate.
*/