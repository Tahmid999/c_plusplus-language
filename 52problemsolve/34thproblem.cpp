#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    unsigned short int A,B,C;
    for (int i = 0; i < T; i++)
    {
        cin>>A>>B>>C;
        for (int i = 1; i <= C; i++)
        {
            if ((i%A==0) && (i%B==0))
            {
                cout<<i<<endl;
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}