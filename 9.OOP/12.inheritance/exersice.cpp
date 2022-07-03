#include<iostream>
#include<math.h>
using namespace std;

class basic_cal
{
    protected:
        int a,b;
    public:
        void setnum1(int a1, int a2)
        {
            a = a1;
            b = a2;
        }
        void display1()
        {
            cout<<"the a+b value is: "<<(a+b)<<endl;
            cout<<"the a-b value is: "<<(a-b)<<endl;
            cout<<"the a*b value is: "<<(a*b)<<endl;
            cout<<"the a/b value is: "<<(a/b)<<endl;
        }
};
class sintific_cal
{
    protected:
        int c,d;
    public:
        void setnum2(int a3, int a4)
        {
            c = a3;
            d = a4;
        }
        void display2()
        {
            cout<<"the sin("<<c<<")"<< "value is: "<<sin(c)<<endl;
            cout<<"the cos("<<c<<")"<< "value is: "<<cos(c)<<endl;
            cout<<"the tan("<<c<<")"<< "value is: "<<tan(c)<<endl;
            cout<<"the log("<<d<<")"<< "value is: "<<log(d)<<endl;
            
        }
};

class hybrid_cal: public basic_cal, public sintific_cal
{

};

int main()
{
    hybrid_cal a;
    a.setnum1(15,30);
    a.display1();
    a.setnum2(10,20);
    a.display2();
    

    return 0;
}