#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<" 1";
            }
            else
            cout<<" 0";
        }
       cout<<endl; 
    }
    return 0;
}
/*
Input the number:
5
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 This is the output of 0-1 pattern .
*/