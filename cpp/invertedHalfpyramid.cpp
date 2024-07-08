#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number :"<<endl;
    cin>>n;

    /*for(int i=1;i>=n;--i)
    {
        for(int j=i;j<=i;++j)
        The mistake I did was that i didn't (initilaized the i by n)*/ 
        for (int i=n; i>=1; --i)
        {
            for (int j = 1; j <=i; ++j)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
/*Input the number :
5
 *  *  *  *  * 
 *  *  *  *
 *  *  *
 *  *
 *
 This was my output after (initilizarion i by 1)
*/