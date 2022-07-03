#include<iostream>
using namespace std;
                   
int main()
{
    int t;
    cin>>t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                cout<<s[j];
            }
        }
        cout<<endl;
        for (int k = 0; k < s.size(); k++)
        {
            if (s[k]!='a' && s[k]!='e' && s[k]!='i' && s[k]!='o' && s[k]!='u')
            {
                cout<<s[k];
            }
        }
        cout<<endl;
    }
    

    return 0;
}