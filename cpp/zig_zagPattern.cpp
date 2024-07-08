 #include <iostream>
 using namespace std;

 int main()
 {
    int n;
    cin>>n;

//     for(int i=1; i<=n ;i++) // the number of rows is fixed.
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if((i+j)%4==0 ||(i==2 && j%4==0))
//             /*
//             We can use the (i+j)%4==0) or (i==2 && j%4==0)in one line.
//             */
//             {
//                 cout" *";
//             }
//             else
//             {
//                 cout"  "; 
//             }
//              cout<<endl;   
//         }
//     }
// return 0;
//  }

for (int i=1;i<=3;i++){
    for(int j=1;j<=n;j++){
        if((i+j)%4==0 || (i==2 && j%4==0)){
            cout<<" *";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
return 0;
}
/*
9
     *       *    
   *   *   *   *
 *       *       *
The output of the zig-zag pattern .

*/