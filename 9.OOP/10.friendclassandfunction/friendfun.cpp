#include<iostream>
using namespace std;

class complex
{
    int a,b;
    friend complex sum(complex, complex);
    public:
        void setdata(int a1, int a2)
        {
            a = a1;
            b = a2;
        }
        void print()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sum(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex x,y,z;
    x.setdata(1,2);
    y.setdata(3,4);
    x.print();
    y.print();

    z = sum(x,y);
    z.print();

    return 0;
}