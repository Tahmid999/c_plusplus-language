#include<iostream>
#include<fstream>
using namespace std;
                   
int main()
{
    ofstream out;
    out.open("open.txt");
    string st = "hello world!";
    out<<"hello world\n";
    out<<st;
    out.close();

    ifstream in;
    in.open("open.txt");
    string st2;
    // getline(in,st2);
    // cout<<st2;
    while (in.eof() ==0)
    {   
        getline(in, st2);
        cout<<st2<<endl;
    }
    
    in.close();
    return 0;
}