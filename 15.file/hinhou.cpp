#include<iostream>
#include<fstream>
using namespace std;
                   
int main()
{
    fstream hout("text.txt");

    string str;
    cout<<"enter your name: ";
    getline(cin, str);

    hout<<str + " is my name";
    hout.close();

    fstream hin("text.txt");
    string str2;
    getline(hin, str2);
    cout<<str2;
    hin.close();

    return 0;
}