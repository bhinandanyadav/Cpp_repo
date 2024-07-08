#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for (int i = 1; i <= n; i++)
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

   int ans= factorial(n);

    cout<<ans<<endl;

    return 0;

}
/*
Input the number:
4
24
This  is the output of factorial using function. 
*/