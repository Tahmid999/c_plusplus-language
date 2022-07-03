#include<iostream>
using namespace std;

class x
{
    int a,b;
    public:
        x(int x, int y)
        {
            a = x;
            b = y;
        }
        x(int x)
        {
            a = x;
            b = 0;
        }
        x(void)
        {
            a = 0;
            b = 0;
        }
        void print()
        {
            cout<<a<<" "<<b<<endl;
        }
};

int main()
{
    x p(1,2);
    p.print();

    x q(5);
    q.print();

    x r;
    r.print();


    return 0;
}