#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int n;
    int res = 0;
    for (int i = 0; i < T; i++)
    {
        cin>>n;
        int num = n;
        int digit;
        while (num!=0)
        {
            digit = num%10;
            res = res + (digit * digit * digit);
            num = num/10;
        }
        if (n==res)
        {
            cout<<n<<" is an armstrong number!"<<endl;
        }
        else
        {
            cout<<n<<" is not an armstrong number!"<<endl;
        }    
        
        res = 0;
    }
    return 0;
}