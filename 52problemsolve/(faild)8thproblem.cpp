#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int n1,n2,n3;
    int temp;
    for (int i = 1; i <= T; i++)
    {
        cin>>n1>>n2>>n3;
        if (n1>n2 && n1>n3)
        {
            temp = n1;
            n1 = n2;
            n2 = n3;
            n3 = temp;
            cout<<"Case "<<i<<" : "<<n1<<" "<<n2<<" "<<n3<<endl;
        }
        else if (n2>n1 && n2>n3)
        {
            temp = n2;
            n1 = n1;
            n2 = n3;
            n3 = temp;
            cout<<"Case "<<i<<" : "<<n1<<" "<<n2<<" "<<n3<<endl;
        }
        else if (n3>n2 && n3>n1)
        {
            
            cout<<"Case "<<i<<" : "<<n1<<" "<<n2<<" "<<n3<<endl;
        }
        
        
    }
    

    return 0;
}