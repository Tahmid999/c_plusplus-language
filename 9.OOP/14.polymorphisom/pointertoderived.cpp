#include<iostream>
using namespace std;

class base
{
    public:
        int var_base;
        void display()
        {
            cout<<"the value of base class var_base is: "<<var_base<<endl;
        }
};

class derived : public base
{
    public:
        int var_derive;
        void display()
        {
            cout<<"the value of base class var_base is: "<<var_base<<endl;
            cout<<"the value of derived class var_derive is: "<<var_derive<<endl;
        }
};

int main()
{
    base *base_pointer;
    base obj_base;
    derived *derived_pointer;
    derived obj_derive;

    base_pointer = & obj_base;
    base_pointer->var_base = 50;
    base_pointer->display();

    derived_pointer = & obj_derive;
    derived_pointer->var_base = 100;
    derived_pointer->var_derive = 150;
    derived_pointer->display();

    return 0;
}