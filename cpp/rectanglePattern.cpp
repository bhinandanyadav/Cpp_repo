#include <iostream>
using namespace std;

// int main()
// {
//     char row;
//     cout<<"Input the no.of rows:"<<endl;
//     cin>>row;
    
//     for(int i=1;i<row;++i){
//     cout<<"*"<<endl;
//     }
//     return 0;

// }
/*    USING NESTED LOOP !
*/
int main()
{
    int row,col;
    cout<<"Input the number of rows and coloumn:"<<endl;
    cin>>row>>col;

    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= col; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    /*THIS WAS MY SECOND PROGRAM WHICH EXECUATED THE SAME AS 
    THE ABOVE CODE BUT THE ABOVE CODE WAS NOT MINE I HAVE DONE
     IT FROM APNA COLLEGE YOUTUBE CHANNEL WHERE THEY WERE USING
     {NESTED LOOP} AND COMPLETING THE PROGRAM WHERE AS I HAVEN'T 
     DONE USING {NESTED LOOP} AND KEEPING IT SIMPLE TO UNDERSTAND.
    */
    // for (int i = 1; i <= row; ++i)
    // {
    //     cout<<"*";
    //     cout<<"*";
    //     cout<<"*";
    //     cout<<"*";
    //     cout<< ""<<endl;

    // }
    return 0;
    
}