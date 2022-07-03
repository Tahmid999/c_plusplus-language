#include<iostream>
using namespace std;

void fuc(int a)
{
    cout<<"i am fun 1 "<<a<<endl;
}

template <class T>
void fuc(T a)
{
    cout<<"i am templte "<<a<<endl;
}

int main()
{
    fuc('D');

    return 0;
}