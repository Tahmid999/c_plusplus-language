#include<iostream>
using namespace std;
                   
int main()
{
    int mark[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"enter value of number "<<i+1<<" : ";
        cin>>mark[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"the value of number "<<i+1<<" is "<<mark[i]<<endl;
    }
    
    

    return 0;
}