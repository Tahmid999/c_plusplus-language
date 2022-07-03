#include<iostream>
using namespace std;

class shop
{
    int id[100];
    int price[100];
    int a;
    public:
        void setproduct(void)
        {   
            cout<<"enter how many product: ";
            cin>>a;
            id[a];
            price[a];
        }
        void setprice();
        void display();
};

void shop::setprice()
{
    for (int i = 0; i < a; i++)
    {
        cout<<"enter no "<<i+1<<" product id: ";
        cin>>id[i];
        cout<<"enter price: ";
        cin>>price[i];
        cout<<endl;
    }
    

}

void shop::display()
{
    for (int i = 0; i < a; i++)
    {
        cout<<"No "<<i+1<<" product id is: "<<id[i]<<endl;
        cout<<"Price is: "<<price[i];
        cout<<endl;
    }
}

int main()
{
    shop tahmid;
    tahmid.setproduct();
    tahmid.setprice();
    tahmid.display();

    return 0;
}