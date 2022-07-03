#include<iostream>
using namespace std;

class base
{
    private:
        int data1;
        int data2;
    public:
        void setdata();
        int getdata1();
        int getdata2();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derrived: public base
{
    int data3;
    public:
        void process();
        void display();
};

void derrived::process()
{
    data3 = ((getdata2()) * (getdata1()));
}

void derrived:: display()
{
    cout<<"data 1 is: "<<getdata1()<<endl;
    cout<<"data 2 is: "<<getdata2()<<endl;
    cout<<"data 3 is: "<<data3<<endl;
}

int main()
{
    derrived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}