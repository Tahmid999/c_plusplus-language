#include<iostream>
#include<math.h>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int x,k;
    for (int i = 0; i < T; i++)
    {
        cin>>x>>k;
        int sum = 1;
        for (int i = 1; i <= k; i++)
        {
            sum = sum + pow(x,i);
        }
        cout<<"Result = "<<sum<<endl;
    }
    

    return 0;
}