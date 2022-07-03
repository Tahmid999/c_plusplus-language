#include<iostream>
using namespace std;

int c = 50;

int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a;
    cin>>b;
    c = a+b;
    cout<<"the value of c is "<<c<<endl;

    cout<<"the value of global c is "<<::c;


    return 0;
}
