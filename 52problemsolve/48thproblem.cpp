#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int n;
    for (int i = 0; i < T; i++)
    {
        cin>>n;
        int arr[n-1];
        for (int i = 0; i < n-1; i++)
        {
            cin>>arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            sum += arr[i];
        }
        int sum2 = 0;
        for (int i = 1; i <= n; i++)
        {
            sum2 += i;
        }

        int miss = sum2-sum;
        cout<<miss<<endl;
        
        
    }
    

    return 0;
}