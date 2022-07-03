#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int X,N;
    for (int i = 0; i < T; i++)
    {
        cin>>X>>N;
        if (X>N)
        {
            cout<<"Invalid"<<endl;
        }
        for (int i = X; i <= N; i= i+X)
        {
            cout<<i<<endl;
        }
        cout<<endl;
        
    }
    

    return 0;
}