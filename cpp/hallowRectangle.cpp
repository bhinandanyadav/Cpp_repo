#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Input the number rows and column:"<<endl;
    cin>>row>>col;

    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= col; ++j)
        {
            if(i==1 || i==row) 
             /*i  am using (&&) this for my curiousity to check it in the pattern  
            code where as we can use (||) for better exprence and results.*/
            {
                cout<<"*";
            }
             else if (j==1 || j==col)
             {
                cout<<"*";
             }
             else
             {
                cout<<" "; /*The mistake done by me was that : I used (space and endl together)
                where as (I have to use first the space )and after that (endl)as followed in line no:26 and 30  */
             }
        }
      cout<<endl;  
    }
   return 0; 
}
/*Input the number rows and column:
5 4
***** 

**

**

*****
my first  output of the hollow rectangle program 
*/