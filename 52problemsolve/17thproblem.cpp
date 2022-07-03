#include<iostream>
using namespace std;
                   
int main()
{
    int t;
    cin>>t;
    string s;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                count++;
            }
            
        }
        cout<<"Number of vowels = "<<count<<endl;
        count = 0;
    }
    

    return 0;
}