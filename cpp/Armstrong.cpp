#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number"<<endl;
    cin>>n;

    int sum=0;
    int real_n=n;
    int countDigits = 0;
    while(n > 0) {
        countDigits++;
        n = n / 10;
    }
    n = real_n;
    while(n>0)
    {
        int lastDigit= n%10;
        sum= sum + pow(lastDigit,countDigits);
        n=n/10;
    }

    if (sum==real_n)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong number"<<endl;
    }

    return 0;
}