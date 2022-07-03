#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
                   
int main()
{
    int n;
    cin>>n;

    int sum = 0;
    int origin=n;

    while (n>0)
    {
        sum += pow((n%10),3);
        n = n/10;
    }

    if (sum==origin)
    {
        cout<<"armstrong"<<endl;
    }
    else
        cout<<"not-armstrong"<<endl;
    
    

    return 0;
}