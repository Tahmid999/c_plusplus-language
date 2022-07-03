#include<iostream>
using namespace std;

class num
{
    private:
        int a, b, c;
    public:
        int d, e;
    
    void setdata(int a1, int b1, int c1);
    void print(void);
};

void num :: setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void num :: print(void)
{
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
}

int main()
{
    num tahmid;
    // tahmid.a = 10; privet so i cann't set this
    tahmid.d = 40;
    tahmid.e = 50;
    tahmid.setdata(10,20,30);
    tahmid.print();


    return 0;
}