#include<iostream>
using namespace std;

bool isprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;

    for (int i = a; i <= b; i++)
    {
        if (isprime(i)==true)
        {
            cout<<i<<endl;
        }
        
    }
    

    return 0;
}