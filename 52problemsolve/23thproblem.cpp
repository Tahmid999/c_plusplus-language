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
            if (s[j]>= 'A' && s[j]<='Z')
            {
                cout<<s[j]-64;
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}