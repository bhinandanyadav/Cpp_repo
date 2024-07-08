#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number:"<<endl;
    cin>>n;

    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
           cout<<" ";
        }
        for(int j = 1; j <= i; j++)
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
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5
This is the triangle of number or number pattern.
*/