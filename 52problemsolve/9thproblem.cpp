#include<iostream>
#include<math.h>
using namespace std;
                   
int main()
{
    int T;
    int n;
    cin>>T;
    int ans = 0;
    for (int i = 1; i <= T; i++)
    {
        cin>>n;
        int sq = sqrt(n);
        if (sq * sq == n)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        
        
    }
    

    return 0;
}