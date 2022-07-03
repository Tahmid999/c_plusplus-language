#include<iostream>
using namespace std;
                   
int main()
{
    int row;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        int num =1;
        for (int j = 1; j<= row-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k<=i; k++)
        {
            cout<<num<<" ";
            num = num*((i-1)-k)/(k+1);
        }
        cout<<endl;
    }
    

    return 0;
}