#include<iostream>
using namespace std;

int count = 0;
class number
{
    public:
        number()
        {
            count++;
            cout<<"constructor on for number "<<count<<endl;
        }
        ~number()
        {
            cout<<"destructor on for number"<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"In main function"<<endl;
    cout<<"creat a object: "<<endl;
    number n1;
    {

        cout<<"start in constructor"<<endl;
        cout<<"creat two more obj:"<<endl;
        number n2,n3;
        cout<<"exiting constructor:"<<endl;
    
    }
    cout<<"again in main function"<<endl;
    return 0;
}