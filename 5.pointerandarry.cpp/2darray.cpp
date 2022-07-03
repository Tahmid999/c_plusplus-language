#include<iostream>
using namespace std;
                   
int main()
{
    int m,n;
    cout<<"enter number of row and col: ";
    cin>>m>>n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"enter for "<<i<<j<<" : ";
            cin>>arr[i][j];
        }
        
    }

    cout<<endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"you type for "<<i<<""<<j<<" is: "<<arr[i][j]<<endl;
        }
        
    }
    
    
    return 0;
}