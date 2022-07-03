#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int N;
    for (int i = 1; i <= T; i++)
    {
        cin>>N;
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    

    return 0;
}