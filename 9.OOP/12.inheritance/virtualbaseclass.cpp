#include<iostream>
using namespace std;

class student
{
    protected:
        int roll;
    public:
        void set_roll(int r)
        {
            roll = r;
        }
        void print_roll()
        {
            cout<<"your roll number is: "<<roll<<endl;
        }
};
class test: virtual public student
{
    protected:
        float math, physics;
    public:
        void set_mark(float m1, float m2)
        {
            math = m1;
            physics = m2;
        }
        void print_mark()
        {
            cout<<"your mark is: "<<endl
            <<"math: "<<math<<endl
            <<"physics: "<<physics<<endl;
        }
};
class sport: virtual public student
{
    protected:
        int scor;
    public:
        void set_scor(int num)
        {
            scor = num;
        }
        void print_scor()
        {
            cout<<"your sport mark is: "<<scor<<endl;
        }
};

class result: public test, public sport
{
    float total;
    public:
        void disply()
        {
            total = math + physics + scor;
            print_roll();
            print_mark();
            print_scor();
            cout<<"your total scor is: "<<total<<endl;

        }
};

int main()
{
    result tahmid;
    tahmid.set_roll(15);
    tahmid.set_mark(50.4,83.7);
    tahmid.set_scor(9);


    tahmid.disply();

    return 0;
}