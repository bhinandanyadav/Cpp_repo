#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number:" <<endl;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        int j;
        for( j=1;j<=n-i;j++)
        {
            cout<<"  ";   
        
        }
        int k=i; //I can't initialize k=1 in the for loop as it will be a garbage value.
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }

    return 0;
}
/*
Input the number:
5
        1 
      2 1 2
    3 2 1 2 3 
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
This is the pattern of palindromic number
*/