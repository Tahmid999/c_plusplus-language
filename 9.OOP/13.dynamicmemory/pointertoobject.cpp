#include<iostream>
using namespace std;

class base
{
    int a,b;
    public:
        void setdata(int x,int y)
        {
            a = x;
            b = y;
        }
        void print()
        {
            cout<<"the value of a is: "<<a<<endl;
            cout<<"the value of b is: "<<b<<endl;
        }
};

int main()
{
    base tahmid;
    // (*ptr).setdata(50,60);
    // (*ptr).print();
    // or
    // ptr->setdata(50,60);
    // ptr->print();
    base *ptr = new base [2];

    ptr[0].setdata(1,2);
    ptr[1].setdata(3,4); 
    for (int i = 0; i < 2; i++)
    {
        ptr[i].print();
    }
    
    

    return 0;
}