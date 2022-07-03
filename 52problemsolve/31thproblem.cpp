#include<iostream>
#include<math.h>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int N,sum,sqrt_num,num;;
    for (int i = 0; i < T; i++)
    {
        cin>>N;
        for (int num = 1; num <= N; num++)
        {
            sum = 1;
            sqrt_num = sqrt(num);
            for (int i = 2; i <= sqrt_num; i++)
            {
                if (num % i == 0)
                {
                    sum = sum+i+num/i;
                }
            }
            if (sum==num)
            {
                cout<<num<<endl;
            }
            
        }
        
    }
    return 0;
}