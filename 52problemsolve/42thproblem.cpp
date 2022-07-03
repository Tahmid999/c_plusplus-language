#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int n;
    for (int i = 0; i < T; i++)
    {
        cin>>n;
        for (int i = n; i >= 2; i--)
        {
            cout<<"2^"<<i<<" + ";
        }
        cout<<"2 + 1"<<endl;
        
    }
    

    return 0;
}