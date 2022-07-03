#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    if ((a<10) && (a>0))
    {
        cout<<"your number is less than 10";
    }
    else if (a>10)
    {
        cout<<"your number is getter than 10";
    }
    else if (a==10)
    {
        cout<<"your number is 10";
    }
    else
        cout<<"your number is 0";
    
    
    return 0;
}