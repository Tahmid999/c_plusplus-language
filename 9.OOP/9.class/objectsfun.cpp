#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;

    public:
        void setvalue(int a1, int a2)
        {
            a = a1;
            b = a2;
        }
        void sum(complex o1, complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void display()
        {
            cout<<a<<"+ "<<b<<"i"<<endl;
        }
};

int main()
{
    complex x,y,z;

    x.setvalue(1, 2);
    x.display();

    y.setvalue(3, 4);
    y.display();
    
    z.sum(x, y);
    z.display();

    return 0;
}