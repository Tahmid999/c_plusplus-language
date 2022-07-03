#include<iostream>
using namespace std;

class base1
{
    public:
        void display()
        {
            cout<<"hello world!"<<endl;
        }
};

class base2
{
    public:
        void display()
        {
            cout<<"hello world, my name is tahmid"<<endl;
        }
};

class derriv: public base1, public base2
{
    int a;
    public:
        void display()
        {
            base2::display();
        }
};


int main()
{
    base1 b;
    base2 c;
    derriv d;
    b.display();
    c.display();
    d.display();

    return 0;
}