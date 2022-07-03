#include<iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int* p ;
    // p = &a;

    // cout<<*p;

    int *p = new int(50);
    cout<<*p<<endl;
    delete p;
    cout<<*p;

    int *arr = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }

    
    delete [] arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}