#include<iostream>
using namespace std;

int f(int n)
{
    int fact=1;
    for (int i = 1 ; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
}


int main()
{
    int n,r;
    cout<<"Input the number n and r:"<<endl;
    cin>>n>>r;

    // int ans = f(n)/(f(r)*f(n-r));
 int numA= f(n);
 int denoM= f(r)*f(n-r);
 int ans= numA/denoM;
 
 cout<<ans<<endl;
    return 0;
}
/*
Input the number n and r:
5 2
10
This is the output of the binomial coeffciant or binary coeffciant.
*/