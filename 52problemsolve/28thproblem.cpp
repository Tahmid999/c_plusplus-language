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
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 1; i < n; i++)
        {
           if (arr[i]<arr[i-1])
           {
               count = 1;
               break;
           }
           
        }
        if (count==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }
    

    return 0;
}