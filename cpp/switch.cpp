 #include <iostream>
 using namespace std;
 
    int main(){
        char button;
        cout<<"Input the button"<<endl;
        cin>>button;
        
//         if (button=='a')
//         {
//             cout<<"hello"<<endl;
//         }
//         else if(button=='b')
//         {
//             cout<<"hey"<<endl;
//         }
//         else if(button=='c')
//         {
//             cout<<"Nasmaste"<<endl;
//         }
//         else if(button=='d')
//         {
//             cout<<"hi Abhinandan"<<endl;
//         }
//         else if(button=='e')
//         {
//             cout<<"hey Abhinandan"<<endl;
//         }
//             else
//             {
//                 cout<<"I will learn more english"<<endl;
//             }
//  } 
 switch (button)
 {
 case'a':
 cout<<"Hello"<<endl;
    break;
     case'b':
 cout<<"hey"<<endl;
    break;
     case'c':
 cout<<"Nasmaste"<<endl;
    break;
     case'd':
 cout<<"hi Abhinandan"<<endl;
    break;
     case'e':
 cout<<"hey Abhinandan"<<endl;
    break;
 default:
 cout<<"I will learn more english"<<endl;
    break;
 }
 return 0;
    }