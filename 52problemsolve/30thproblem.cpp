#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    unsigned long int N;
    for (int i = 0; i < T; i++)
    {
        cin>>N;
        unsigned long int sum=0;
        for (int i = 1; i < N; i++)
        {
            if (N%i == 0)
            {
                sum += i;
            }
            
        }
        if (sum==N)
        {
            cout<<"Yes, "<<N<<" is a perfect number!"<<endl;
        }
        else
        {
            cout<<"No, "<<N<<" is not perfect number!"<<endl;
        }    
        
        sum = 0;
    }
    

    return 0;
}