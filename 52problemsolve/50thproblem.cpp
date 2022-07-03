#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    string s;
    for (int i = 0; i < T; i++)
    {
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='R')
            {
                s[i]=s[i+1];
            }
            else if (s[i]=='L')
            {
                s[i] = s[i-1];
            }
            
        }
        cout<<s<<endl;
    }
    

    return 0;
}