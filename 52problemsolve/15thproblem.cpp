#include<iostream>
#include<string.h>
using namespace std;
                   
int main()
{
    int T;
    string s;
    int count = 0;
    char ch = 97;
    cin>>T;
    for (int i = 1; i <= T; i++)
    {
        cin>>s;
        for (char j = ch; j <= 122; j++)
        {
            for (int k = 0; k < s.length(); k++)
            {
                if (s[k]==j)
                {
                    count++;
                }
                else
                    continue;
            }
            if (count==0)
            {
                continue;
            }
            cout<<j<<" = "<<count<<endl;
            count = 0;  
        }
        cout<<endl;
    }
    return 0;
}