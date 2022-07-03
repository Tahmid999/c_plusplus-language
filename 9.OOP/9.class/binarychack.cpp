#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void input(void);
    void chk(void);
    void oncecm(void);
    void print();
};

void binary ::input()
{
    cout << "enter a binary number: ";
    cin >> s;
}

void binary ::chk()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "this is not a binary number" << endl;

            while (((s.at(i) != '0') && (s.at(i) != '1')))
            {
                input();

                if ((s.at(i) == '0') && (s.at(i) == '1'))
                {
                    break;
                }
            }
        }
    }
}

void binary ::oncecm(void)
{

    cout << endl
         << "once complement is: " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::print()
{
    cout << s;
}

int main()
{
    binary tahmid;

    tahmid.input();
    tahmid.chk();
    tahmid.print();
    tahmid.oncecm();
    tahmid.print();

    return 0;
}