#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    void sum(complex, complex);
    
};

class complex
{
    int a, b;

public:
    friend void calculator::sum(complex, complex);
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

void calculator::sum(complex o1, complex o2)
{
    complex o3;
    
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    o3.print();
    // cout<<(o1.a + o2.a)<<" + "<<(o1.b + o2.b)<<"i"<<endl;
}

int main()
{
    complex x,y;
    x.setdata(1,2);
    y.setdata(3,4);
    x.print();
    y.print();

    calculator calc;
    calc.sum(x,y);

    
    return 0;
}