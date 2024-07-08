#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number:"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"Not prime number"<<endl;
            break;
        }
        else
        {
          cout<<"Prime number"<<endl;  
        }
        }
     return 0;      
}