#include<iostream>
using namespace std;

class number
{
    int a;
    public:
        number(){}
        number(int x)
        {
            a = x;
        }
        void print()
        {
            cout<<a<<endl;
        }
        number(number &obj)
        {
            cout<<"copy constructor call!!!"<<endl;
            a = obj.a;
        }
};

int main()
{
    number p,q,r;

    p = number(50);
    p.print();

    number s(p);
    s.print();

    return 0;
}