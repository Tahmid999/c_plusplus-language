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
        int size = s.size();
        int arr[size];
        for (int i = 0; i < s.size(); i++)
        {
            arr[i] = s[i]-'0';
        }
        
        if (arr[0]==arr[size-1])
        {
            cout<<"Yes! It is a palindrom!"<<endl;
        }
        else
            cout<<"Sorry! It is not a palindrom!"<<endl;
    }
    

    return 0;
}