#include <iostream>
using namespace std;

int main()
{
    int n,count=1;
    cout<<"Input the number:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        cout<<count;/* We always have to do the  increment in the next line because if we do the same line we will be getting the
        number as to show how the increament is been done and the output will always be doubled in the Terminal . So we always have to do
        the pre/post increment in the next line to show the that the number is increasing side by side. */
        ++count;
      }
      cout<<endl;
    }
    return 0;
}

/* 
Input the number:
5
1
23
456
78910
1112131415
this my output of the Floyd's Triangle
*/