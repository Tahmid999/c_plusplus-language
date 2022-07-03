#include<iostream>
using namespace std;

float ep(int m, int h, float g=9.8)
{
    float sum;
    sum = (float)(m*h*g);

    return sum;
} 

int main()
{
    int m,h;
    float g;

    cout<<"enter m, h: ";
    cin>>m>>h;

    cout<<"enter g if you want: ";
    cin>>g;

    if (g==0)
    {
        cout<<"your ep sum is: "<<ep(m,h);
    }
    else
        cout<<"your ep sum is: "<<ep(m,h,g);
    
    return 0;
}