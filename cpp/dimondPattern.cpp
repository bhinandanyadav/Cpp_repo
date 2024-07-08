#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number:" <<endl;
    cin>>n;

    for (int i=1; i<=n;i++)
    {
        for (int j = 1; j <=n-i; j++)
        /* I have did the mistake
        that i haven't done the 
        condition in perfect manner
         the correct way to do this is
         for (int j = 1; j <= n-i; j++).
         Where as i was comparing (j<=i)
         that was my fault.
        
        */
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
           cout<<"*";
        }
    cout<<endl;    
    }

 for (int i=n; i>=1 ;i--)
 /*Here we have to remember that we have to do the reverse
 programing for the rows so here we have to initialize (i=n)
 and check the condition that (i>=1) and the last we have to 
 do the updating part(i--).
 */
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
           cout<<"*";
        }
    cout<<endl;  
    }
    return 0;
}
/*
Input the number:
4
   *
  ***
 *****
*******
*******
 *****
  ***
   *
The output of the dimond pattern or the star pattern.
*/