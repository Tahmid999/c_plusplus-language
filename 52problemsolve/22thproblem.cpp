#include<iostream>
using namespace std;
                   
int main()
{
    int t;
    cin>>t;
    int a,b;
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        for (int j = a; j <= b; j++)
        {
            for (int k = 2; k < j; k++)
            {
                if (j%k==0)
                {
                    count++;
                }
                
            }
            if (count==0)
            {
                count2++;
            }
            count = 0;
        }
        cout<<count2<<endl;
        count2 = 0;
        count = 0;
    }
    

    return 0;
}