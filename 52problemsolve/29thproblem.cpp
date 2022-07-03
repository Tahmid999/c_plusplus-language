#include<iostream>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    char ch;
    for (int i = 0; i < T; i++)
    {
        cin>>ch;
        int num = ch;
        if ((num>=32 && num<=47) || (num>=58 && num<=64))
        {
            cout<<"Special Charecter"<<endl;
        }
        else if (num>=48 && num<=57)
        {
            cout<<"Numerical Digit"<<endl;
        }
        else if (num>=65 && num<=90)
        {
            cout<<"Uppercase Character"<<endl;
        }
        else if (num>=97 && num<=122)
        {
            cout<<"Lowercase Character"<<endl;
        }
        
        
    }
    

    return 0;
}