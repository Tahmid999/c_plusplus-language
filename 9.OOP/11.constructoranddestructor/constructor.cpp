#include<iostream>
using namespace std;

class x
{
    int a,b;
    public:
        x(void);
        void print()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

x::x()
{
    a = 10;
    b = 20;
    // cout<<a<<" "<<b<<endl;
}

int main()
{
    x p,q;
    p.print();
    


    return 0;
}