#include<iostream>
using namespace std;

void fibo(int num)
{
    int t1=0;
    int t2=1;
    int next;
    for (int i = 1; i <= num; i++)
    {
        cout<<t1<<" ";
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    
} 

int main()
{
    int n;
    cin>>n;
    fibo(n);

    return 0;
}