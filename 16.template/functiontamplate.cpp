#include<iostream>
using namespace std;

template <class T1, class T2>
float averege(T1 x, T2 y)
{
    float avg = (float)(x+y)/2;

    return avg;
}

template <class T1, class T2>
void swapp(T1 &a, T2 &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
   float a;
   a = averege(6,6.1);
   cout<<a<<endl;

    int x = 15;
    float y = 20.45;
    cout<<x<<endl<<y<<endl;

    swapp(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}