#include <iostream>
using namespace std;

int octalToDecimal( int n)
{
    int value=0;
    int  x=1;
    while(n>0)
    {
        int lastValue = n%10;
        value +=  x*lastValue;
        x *= 8;
        n /=10;
    }
    return value;
}

int main()
{
    int n;
    cout<<"Input the octal number:"<<endl;
    cin>>n;

    int ans=  octalToDecimal(n);

    cout<<ans<<endl;

    return 0;
}