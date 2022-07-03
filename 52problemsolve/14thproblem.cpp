#include<iostream>
#include<string>
using namespace std;
                   
int main()
{
    int T;
    string s;
    char ch;
    int count =0;
    cin>>T;
    cin>>T;
    for (int i = 1; i <= T; i++)
    {
        getline(cin,s);
        cin>>ch;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j]==ch)
            {
                count++;
            }
            
        }
        if (count==0)
        {
            cout<<ch<<" is not present"<<endl;
        }
        else
        {
            cout<<ch<<" available in "<<count<<endl; 
        }
        count = 0;
        
    }
    

    return 0;
}