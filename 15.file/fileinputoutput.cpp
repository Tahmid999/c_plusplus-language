#include<iostream>
#include<fstream>
using namespace std;
                   
int main()
{
    // writing mathod or output file from programm.
    // string st = "tahmid is a good boy";
    // ofstream out("simple.txt");
    // out<<st;

    // reading mathod or innput file from file.
    int a;
    ifstream in("simple.txt");
    in>>a;
    cout<<a;


    return 0;
}