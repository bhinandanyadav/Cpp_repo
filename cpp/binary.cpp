#include <iostream>
using namespace std;
struct student 
{
    int roll;
    char name[20];
    float marks;    
};
int main()
{
    struct student  *k ;
 k=(struct student *) malloc(sizeof(struct student));
    k->roll=101;
    k->marks=98.5;
    k->name,"Abhinandan";
    cout<<k->roll<<endl;
    cout<<k->marks<<endl;
    cout<<k->name<<endl;
}