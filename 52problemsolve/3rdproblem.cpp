#include<iostream>
using namespace std;
                   
int main()
{
    int n=1000;
    int count = 0;
    for (int i = n; i >=1; i--)
    {
        cout<<i<<"\t";
        // int count = i;
        count++;
        if (count%5==0)
        {
            // cout<<i;
            cout<<endl;
            count = 0;
        }
        
    }
    

    return 0;
}