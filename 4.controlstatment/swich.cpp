#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;

    switch (a)
    {
    case 0:
        cout<<"number is 0"<<endl;
        break;
    case 10:
        cout<<"number is 10"<<endl;
        break;
    default:
        cout<<"this is not a number"<<endl;
        break;
    }
    return 0;
}