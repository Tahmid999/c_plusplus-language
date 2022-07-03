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
        int size = s.size();
        char ch[size];
        for (int i = 0; i < size; i++)
        {
            ch[i] = s[i];
        }
        for (int i = size-1; i >= 0; i--)
        {
            cout<<ch[i];
        }
        cout<<endl;
        
    }
    

    return 0;
}