#include <iostream>
using namespace std;

int main()
 {
   int n;
   cout<<"Input the number:"<<endl;
   cin>>n;

   for (int i =1; i <= n; i++)
   {
    for (int j =1; j <= i; j++)
    {
        cout<<i<<" "; //The mistake done by me was that i was not taking i to print it (cout<<" i";).
        // i was takeing i in between semicolon and then trying to print it which was wrong, the correct way to print the number 
        // pyramid was we to write (cout<<i<<" ";)
    }
    cout<<endl;
   }
   return 0;
}
/*
Input the number:
5
1 
2 2
3 3 3
4 4 4 4 
5 5 5 5 5
the out of the half pyramid usng number
*/