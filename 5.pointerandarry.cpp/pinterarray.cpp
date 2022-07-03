#include<iostream>
using namespace std;
                   
int main()
{
    int mark[5] = {10,20,30,40,50};
    int* p = mark;

    for (int i = 0; i < 5; i++)
    {
        cout<<"the value of number "<<i+1<<" is "<<*(p++)<<endl;
    }

    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"the address of number "<<i+1<<" is "<<p<<endl;
        p++;
    }

    cout<<p++<<endl;
    cout<<p++<<endl;
    cout<<p++<<endl;
    cout<<p++<<endl;
    cout<<p++<<endl;
    

    return 0;
}