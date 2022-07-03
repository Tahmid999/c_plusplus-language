#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
        base1(int a)
        {
            data1 = a;
            cout<<"base1 constructor run! "<<endl;
        }
        void printbase1()
        {
            cout<<"the value of data1 is: "<<data1<<endl;
        }
};

class base2
{
    int data2;
    public:
        base2(int b)
        {
            data2 = b;
            cout<<"base2 constructor run! "<<endl;
        }
        void printbase2()
        {
            cout<<"the value of data2 is: "<<data2<<endl;
        }
};

class derive: public base2, public base1
{
    int data3,data4;
    public:
        derive(int a, int b, int c, int d): base2(b),base1(a)
        {
            data3 = c;
            data4 = d;
            cout<<"derive contructor run! "<<endl;
        }
        void printderive()
        {
            cout<<"the value of data3 is: "<<data3<<endl;
            cout<<"the value of data4 is: "<<data4<<endl;
        }
};


int main()
{
    derive tahmid(1,2,3,4);
    tahmid.printbase1();
    tahmid.printbase2();
    tahmid.printderive();
    return 0;
}