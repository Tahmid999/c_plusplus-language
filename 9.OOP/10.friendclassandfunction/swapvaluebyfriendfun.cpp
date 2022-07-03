#include<iostream>
using namespace std;

class y;
class x
{
    int a;
    public:
        void setvalue(int a1)
        {
            a = a1;
        }
        void print()
        {
            cout<<a<<endl;
        }
    friend void swap(x& ,y& );
};

class y
{
    int b;
    public:
        void setvalue(int a2)
        {
            b = a2;
        }
        void print()
        {
            cout<<b<<endl;
        }
    friend void swap(x& ,y& );  
};

void swap(x& o1, y& o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;

}

int main()
{
    x a;
    y b;
    a.setvalue(2);
    b.setvalue(5);
    cout<<"value of a is: ";
    a.print();
    cout<<"value of b is: ";
    b.print();

    swap(a,b);
    cout<<"after swap value of a is: ";
    a.print();
    cout<<"after swap value of b is: ";
    b.print();

    return 0;
}