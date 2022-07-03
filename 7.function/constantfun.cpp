#include<iostream>
using namespace std;

float sum(int r, const float pi=3.1416)
{
    float sum;
    sum = (float)((float)r*pi);
    return sum;
}

int main()
{
    int r;
    float pi;

    cin>>r>>pi;

    cout<<"your sum is "<<sum(r,pi);


    return 0;
}