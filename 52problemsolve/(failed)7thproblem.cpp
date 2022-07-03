#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    string s;
    int arr[1000];
    int count = 0;
    for (int i = 0; i < T; i++)
    {
        cin>>s;
        for (int j = 0; j < s.size(); j++)
        {
            // if (s[i]=='32')
            // {
            //     continue;
            // }
            
            arr[j] = s[j]-'0';
        }
        int size = arr[s.size()];
        for (int k = 0; k < size; k++)
        {
            for (int l = size-1; l >= 0; l--)
            {
                if (arr[k]==arr[l])
                {
                    count--;
                }
                count++; 
            }
        }
        cout<<count<<endl;
        count = 0;
    
    }
    

    return 0;
}