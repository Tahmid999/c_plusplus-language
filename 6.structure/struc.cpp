#include<iostream>
using namespace std;

struct student
{
    char name[20];
    int roll;
} ;
  

int main()
{
    int n;
    cout<<"how many student: ";
    cin>>n;

    struct student xm[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"enter student name: ";
        cin>>xm[i].name;
        cout<<"enter student roll: ";
        cin>>xm[i].roll;

        cout<<endl;

    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Student "<<i+1<<" name is: "<<xm[i].name<<endl;
        cout<<"Student "<<i+1<<" roll is: "<<xm[i].roll<<endl;

        cout<<endl;
    }
    
    


    return 0;
}