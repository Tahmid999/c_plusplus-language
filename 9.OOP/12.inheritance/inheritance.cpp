#include<iostream>
using namespace std;

// base class 
class x
{
    public:
    int id;
    float salary;
        x(){}
        x(int pid)
        {
            id = pid;
            salary = 50.55;
        }
};

// creating derrived class
class y : public x
{
    public:
    int language;
        y(int yid)
        {
            id = yid;
            language = 9;
        }
        void getdata()
        {
            cout<<language<<" "<<id<<endl;
        }
};

int main()
{
    x tahmid(5);
    cout<<tahmid.salary<<endl;
    y siam(10);
    // cout<<siam.id<<endl;
    siam.getdata();

    return 0;
}