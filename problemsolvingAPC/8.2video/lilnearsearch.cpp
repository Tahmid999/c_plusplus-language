#include<iostream>
using namespace std;

bool linearsearch(int arr[], int num, int key)
{
    for (int i = 0; i < num; i++)
    {
        if (arr[i]==key)
        {
            return true;
            break;
        }   
    }
    return false;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    linearsearch(arr,n,key);
    if (linearsearch(arr,n,key)==true)
    {
        cout<<"yes found"<<endl;
    }
    else
        cout<<"not found"<<endl;

    return 0;
}