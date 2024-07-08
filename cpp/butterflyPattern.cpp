#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number:"<<endl;
    cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             int space;
//             if (space=2*n-2*i)
//             {
//                 cout<<" ";
//             }else{
//                 cout<<" *";
//             }
//            for (int j = 1; j <= i; j++) {
//             cout<<"*";
//            } 
//            cout<<endl;
//         }
      
//     }
//       return 0;
// }
/*
Input the number:
4
 *
 **
 **
 ***
 ***
 ***
 *****
 *****
 *****
 *****
*/
for (int i = 1; i <= n; i++)  //rows-----> int i;
{
    for (int j = 1; j <= i; j++)  //column-------> int j;
    {
        cout<<"*";
    }
    int space=2*n-2*i;
    for (int i=1; i<=space;i++ )
    {
        cout<<" ";
    }
     for (int j = 1; j <= i; j++)
    {
        cout<<"*";
    
}
cout<<endl;
}

for (int i = n; i >= 1; i--)  //rows-----> int i;
/*my mistake was that i was putting the condition wrong------> for (int i = n; i <= 1; i--) ;
where as the correct condition is -------> for (int i = n; i >= 1; i--) ;
*/
{
    for (int j = 1; j <= i; j++)  //column-------> int j;
    {
        cout<<"*";
    }
    int space=2*n-2*i;
    for (int i=1; i<=space;i++ )
    {
        cout<<" ";
    }
     for (int j = 1; j <= i; j++)
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
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
the output of the butterfly pattern.
*/