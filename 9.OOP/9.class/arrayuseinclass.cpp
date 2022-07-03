#include<iostream>
using namespace std;

class shop
{
    int id[100];
    int price[100];
    int counter = 0;
    public:
        
        void setprice(void);
        void display(void);
};


void shop::setprice(void)
{
    cout<<"enter product no "<<counter+1<<" product id: ";
    cin>>id[counter];
    cout<<"enter product price: ";
    cin>>price[counter];

    counter++;

    cout<<endl;
    
    
}

void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"your no "<<i+1<<" product id is: "<<id[i]<<endl;
        cout<<"price is: "<<price[i]<<endl;
    }
    
}

int main()
{
    shop tahmid;
    int n;
    cout<<"how many product: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        tahmid.setprice();
    }
    
    tahmid.display();

    return 0;
}