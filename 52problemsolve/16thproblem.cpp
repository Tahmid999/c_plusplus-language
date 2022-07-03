#include<iostream>
#include<string.h>
using namespace std;
                   
int main()
{
    int T;
    string s;
    cin>>T;
    for (int i = 1; i <= T; i++)
    {
        cin>>s;
        char s2[s.size()];
        for (int j = 0; j < s.size(); j++)
        {
            s[j] = s2[j]-'0';
        }
        for (int k = s.size()-1; k >= 0; k--)
        {
            cout<<s2[k];
        }
        cout<<endl;
        
    }

    return 0;
}    