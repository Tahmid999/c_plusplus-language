#include<iostream>
#include<math.h>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int p,q,r;
    for (int i = 0; i < T; i++)
    {
        cin>>p>>q>>r;
        int power = (int)pow(p,q) % r;
        cout<<"Result = "<<power<<endl;
    }
    

    return 0;
}