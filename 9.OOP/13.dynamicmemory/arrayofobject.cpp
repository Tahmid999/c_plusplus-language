#include<iostream>
using namespace std;

class shop
{
    int id;
    float price;
    public:
        void setdata(int a, float b)
        {
            id = a;
            price = b;
        }
        void print()
        {
            cout<<"code of id is: "<<id<<endl;
            cout<<"price of this iteam is: "<<price<<endl;
        }
};

int main()
{
    int n;
    cout<<"how many product: "<<endl;
    cin>>n;
    shop *tahmid = new shop [n];
    shop *temp = tahmid;
    int p;
    float q;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the id for product no : "<<i+1<<endl;
        cin>>p>>q;
        tahmid->setdata(q,q);
        tahmid++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"id and price for product no :"<<i+1<<endl;
        temp->print();
        
        temp++;
    }
    
    

    return 0;
}