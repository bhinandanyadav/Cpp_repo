#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number"<<endl;
    cin>>n;

    int reverse=0;
    while (n>0) //My biggest mistake was that I was not comparing it properly (n<=0)
    //Where as we do the comparision (n>0) where 0 should be more than n.
    {
        int lastDigit= n%10;
        reverse=reverse* 10 +  lastDigit;
        n=n/10;
    }
cout<<"Reverse of the number is:"<<reverse;
cout<<endl;
return 0;
}
/*
Input the number
62828229
Reverse of the number is:92282826
This the output of the program of reverse of the number.
*/