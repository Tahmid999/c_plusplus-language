#include<iostream>
using namespace std;

class a
{
    int a;
    public:
        void setdata(int a)
        {
            this->a = a;
        }
        void print()
        {
            cout<<"the value of a is: "<<a<<endl;
        }
};

int main()
{
    a tahmid;
    tahmid.setdata(5);
    tahmid.print();
   

    return 0;
}