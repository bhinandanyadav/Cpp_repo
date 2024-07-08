#include <iostream>
using namespace std;
 
int binaryToDecimal(int n)
{
     int value= 0;
     int x= 1;
     while( n>0)
     {
          int lastNumber = n%10;
          value +=x*lastNumber;
          x *=2;
          n /=10;
     }
     return value;
} 




int main()
{
     int n;
     cout<<"Input the binary number:"<<endl;
     cin>> n;

     int ans= binaryToDecimal(n);

     cout<<ans<<endl;

     return 0;
    
}

/*    Input the binary number:
 101
 5
 This is the output of the conversion of binary number to 
 decimal number.
 */