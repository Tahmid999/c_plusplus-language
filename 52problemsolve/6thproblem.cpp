#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int N;
    int arr[5] ;
    for (int i = 1; i <= T; i++)
    {
        cin>>N;
        // for (int j = 0; j < 5; j++)
        // {
        //     int digit = N%10;
            
        //     int N = N/10;
        // }
        // int sum = arr[0]+arr[4];

        //or more efficiant

        int last = N%10;
        int fast = N/10000;
        int sum = fast + last;
        cout<<"Sum = "<<sum<<endl;
        
    }
    

    return 0;
}