#include<iostream>
using namespace std;

template <class T1, class T2>
class x
{
    T1 data1;
    T2 data2;
    public:
        x(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }

        void display()
        {
            cout<<data1<<endl<<data2<<endl;
        }
};

int main()
{
    x <int, float> myclass(15,15.1564);
    myclass.display();

    return 0;
}