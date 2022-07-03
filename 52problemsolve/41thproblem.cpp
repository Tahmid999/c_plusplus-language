#include<iostream>
#include<iomanip>
using namespace std;

long long int fact(int n)
{
    long long int facto = 1;
    if (n==0 && n==1)
    {
        return 1;
    }
    for (long long int j = 1; j <= n; j++)
    {
        facto = facto * j;
    }
    return facto;
}

int main()
{
    int T;
    cin>>T;
    int n;
    for (int i = 0; i < T; i++)
    {
        cin>>n;
        double result = 0.0;
        for (int i = 1; i <= n; i++)
        {
            // int factorial = fact(i);
            result += (double)i/fact(i);
        }
        // printf("%.4lf\n",result);
        cout<<setprecision(5)<<result<<endl;
    }
    

    return 0;
}