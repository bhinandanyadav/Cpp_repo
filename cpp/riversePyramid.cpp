#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Input the number:"<<endl;
//     cin>>n;
    
//     for (int i = 1; i<=n; i++)
//      /* In the condition phase I was taking (i>=n) which was wrong because it will run
//      infity time where as it will be (i<=n) it will run program till the user given the input*/
//     {
//     for (int j = 1; j<=n; j++)
//     if(j<n-i)
//     {
//         cout<<"  ";
//     }
//     else{
//     cout<<" * ";
//     }
//     cout<<endl;
//     }
    
//     return 0;

    

    int main()
    {
        int n;
        cout<<"Input the number:"<<endl;
        cin>>n;

        for(int i=1;i<=n;++i)
        {
            for (int j=1; j<=n;++j)
            {
                 if (j<=n-i) // my fault was here that is comparing it with out giving an( = ) 
                {
                    cout<<"   ";
                }
                else
                {
                    cout<<" * ";
                }

            }  
             cout<<endl;
        }
        return 0;
    }
    /*Input the number:
5
             * 
          *  *
       *  *  *
    *  *  *  * 
 *  *  *  *  *
 After the compilation i got this as out put for riverse inverted pyramid
    */
