#include<iostream>
using namespace std;

int sum(int, int); 

void print(void)
{
    cout<<endl<<"hello world";
}

int main()
{
    int n1,n2;

    cout<<"enter two number: ";
    cin>>n1>>n2;

    cout<<"your sum is: "<<sum(n1,n2);

    print();

    return 0;
}

int sum(int a, int b)
{
    int c;
    c= a+b;
    return c;
}

