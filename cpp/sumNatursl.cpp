 #include <iostream>
 using namespace std;

int sum(int n)
{
    int value=0;
    for (int i = 1; i <= n; i++)
    {
        value+= i;

        cout<< value<<" ";
    }
     return value;
}




 int main()
 {
    int n;
    cin>>n;

   int ans=sum(n); 
    cout<<ans<<endl;

 }
/*
5
1 3 6 10 15 15
This is my output of the sum if natrual number using function.
*/