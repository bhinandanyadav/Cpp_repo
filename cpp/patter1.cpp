#include<iostream>
using namespace std;
 int main()
 {
//     int n;
//     cout<<"Input the number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//      return 0;
//  }
 /*
 Input the number:
5
1         
1 2       
1 2 3     
1 2 3 4   
1 2 3 4 5 
This is the pattern  of number pyramid.
 */

int n;
cout<<"Input the number:"<<endl;
cin>>n;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n+1-i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl; 
}
return 0;
}
/*
Input the number:
5
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
This the inverted number pyaramid using number.
*/