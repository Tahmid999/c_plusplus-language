#include<iostream>
using namespace std;

int fact(int num)
{
    int sum=1;
    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    return sum;
    
}

int main()
{
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;

    return 0;
}