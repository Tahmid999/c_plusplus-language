#include<iostream>
#include<string>
using namespace std;

class employ
{
    int id;
    string s;
    int salary;
    public:
        void setvalue(void);
        void display();
};
void employ::setvalue(void)
{
    cout<<"enter empoly id no: ";
    cin>>id;
    cout<<"enter name: ";
    cin>>s;
    cout<<"enter salary: ";
    cin>>salary;

    cout<<endl;
}

void employ::display(void)
{
    cout<<"ID is: "<<id<<endl;
    cout<<"Name is: "<<s<<endl;
    cout<<"Salary is: "<<salary<<endl;

}

int main()
{
    int n;
    cout<<"enter how many employ: ";
    cin>>n;

    employ fb[n];

    for (int i = 0; i < n; i++)
    {
        fb[i].setvalue();
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        fb[i].display();
        cout<<endl;
    }
    

    return 0;
}