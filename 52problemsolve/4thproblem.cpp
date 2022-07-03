#include<iostream>
#include<algorithm>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int N;
    for (int i = 1; i <= T; i++)
    {
       cin>>N;
       cout<<"Case "<<i<<" :";
       for (int j = 1; j <= N; j++)
       {
           if (N%j==0)
           {
            //    sort(j.begin(),j.end());
               cout<<j<<" ";
           }
           
       }
       cout<<endl;
       
    }
    

    return 0;
}