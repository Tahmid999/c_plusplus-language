#include<iostream>
using namespace std;

class student
{
    private:
        int roll;
    public:
        void setroll(int);
        void getroll();
};

void student ::setroll(int r)
{
    roll = r;
}

void student :: getroll()
{
    cout<<"the roll number is: "<<roll<<endl;
}

class exam : public student
{
    protected:
        float physics;
        float math;
    public:
        void setmark(float, float);
        void getmark();
};

void exam::setmark(float m1, float m2)
{
    physics = m1;
    math = m2;
}
void exam::getmark()
{
    cout<<"the number of physics is: "<<physics<<endl;
    cout<<"the number of math is: "<<math<<endl;   
}

class result: public exam
{
    float parsentage;
    public:
        void display();
};

void result :: display()
{
    cout<<"student parsectage mark is: "<<((physics+math)/2)<<endl;
}

int main()
{
    result r;
    r.setroll(15);
    r.getroll();
    r.setmark(88.5,78.3);
    r.getmark();
    r.display();

    return 0;
}