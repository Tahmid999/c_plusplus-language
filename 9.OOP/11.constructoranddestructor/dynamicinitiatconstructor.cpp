#include<iostream>
using namespace std;

class bank
{
    int principal;
    int year;
    float rate;
    float interest;
    public:
        bank(){}
        bank(int p, int y, int r);
        bank(int p, int y, float r);
        void print();
};

bank::bank(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float(r)/100;
    interest = principal;
    for (int i = 0; i < year; i++)
    {
        interest = interest * (1+rate);
    }
    
}
bank::bank(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r;
    interest = principal;
    for (int i = 0; i < year; i++)
    {
        interest = interest * (1+rate);
    }
    
}

void bank ::print()
{
    cout<<"your amount is: "<<principal<<" and interest after "<<year<<" year is: "<<interest<<endl;
}

int main()
{
    bank a,b,c;

    int p,y,R;
    float r;
    cout<<"enter p,y,R: ";
    cin>>p>>y>>r;

   
    a = bank(p,y,r);
    a.print();






    return 0;
}