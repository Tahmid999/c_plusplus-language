#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    string s1,s2;
    for (int i = 0; i < T; i++)
    {
        cin>>s1>>s2;
        int count = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s2[0]==s1[i])
            {
                int j;
                for (j = 1; j < s2.size(); j++)
                {
                    if (s2[j]!=s1[i+j])
                    {
                        break;
                    }
                }
                if (j == s2.size())
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    

    return 0;
}