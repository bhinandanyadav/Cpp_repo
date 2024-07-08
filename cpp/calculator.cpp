#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char calculate;
    cout<<"Input the numbers:"<<endl;
    cin>>a>>b>>calculate;
    switch (calculate)
    {
    case '+':{
        cout<<a+b<<endl;
    }
        break;
         case '-':{
        cout<<a-b<<endl;
    }
        break;
         case '*':{
        cout<<a*b<<endl;
    }
        break;
         case '/':{
        cout<<a/b<<endl;
    }
        break;
    
    default:
    {
        cout<<"Not done in this calculator:"<<endl;
    }
        break;
    }

return 0;
}