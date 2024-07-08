#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input the number:"<<endl;
    cin>>n;

    if (n%2==0 && n%3==0)
    {
        cout<<"Divisible by both the 2 and 3 "<<endl;
    }
    else if (n%2==0)
    {
        cout<<"Divisible by one number thats 2"<<endl;
    }
    else if (n%3==0)
    {
        cout<<"Divisible by one number thats 3"<<endl;
    }
    else 
    {
        cout<<"Divisible by non of them"<<endl;
    }
    return 0;
    
}