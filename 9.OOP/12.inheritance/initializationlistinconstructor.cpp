#include<iostream>
using namespace std;

class base
{
    int a;
    int b;
    public:
        base(int x, int y): a(x), b(a + y)
        {
            cout<<"constructor run! "<<endl;
            cout<<"the value of a is: "<<a<<endl;
            cout<<"the value of b is: "<<b<<endl;

        }
};

int main()
{
    base tahmid(1,2);

    return 0;
}