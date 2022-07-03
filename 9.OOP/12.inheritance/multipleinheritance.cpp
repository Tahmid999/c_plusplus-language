#include<iostream>
using namespace std;

class base1
{
    protected:
        int a;
    public:
        void seta(int x)
        {
            a = x;
        }
};
class base2
{
    protected:
        int b;
    public:
        void setb(int y)
        {
            b = y;
        }
};
class base3
{
    protected:
        int c;
    public:
        void setc(int z)
        {
            c = z;
        }
};

class derriv : public base1, public base2, public base3
{
    public:
        void display()
        {
            cout<<"the 1st value is: "<<a<<endl;
            cout<<"the 2nd value is: "<<b<<endl;
            cout<<"the 3rd value is: "<<c<<endl;
            cout<<"the sum is: "<<(a+b+c)<<endl;
        }
};

int main()
{
    derriv d;
    d.seta(50);
    d.setb(50);
    d.setc(50);
    d.display();

    return 0;
}