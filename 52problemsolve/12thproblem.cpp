#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int n;
    int count = 0;
    for (int i = 1; i <= T; i++)
    {
        cin>>n;
        int fact = 1;
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        while (fact!=0)
        {
            int digit = fact%10;
            if (digit==0)
            {
                count++;
            }

            fact = fact/10;
        }
        
        cout<<count<<endl;
        count = 0; 
    }
    

    return 0;
}