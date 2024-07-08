#include<iostream>
using namespace std;

int f(int n)
{
    int fact=1;
    for (int i = 2; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Input the number:"<<endl;
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; i <= i; j++)
        {
          cout<<f(i)/(f(j)*f(i-j))<<" "; 
        }
        cout<<endl;  
    }
    return 0;
}