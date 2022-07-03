#include<iostream>
using namespace std;

class base
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};

class derriv: public base
{

};
int main()
{
    base b;
    // b.a; // not accessable couse protected

    derriv d;
    // d.a; // not accessable couse privet inherited and protected member

    // d.b; // not accessable couse public inherited and protected member

    // d.b; // not accessable couse protected inherited and also protected member

    d.c;

    return 0;
}