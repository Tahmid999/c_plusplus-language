#include<iostream>
#include<string>
using namespace std;
                   
int main()
{
    string str;

    cout<<"enter your name: ";
    getline(cin, str);
    cout<<str<<endl;

    cout<<str.size();

    return 0;
}